#include "generatenumbers.hpp"

#include <algorithm>

void generatenumbers(std::vector<long long>& a, int n) {

	a.push_back(1);

	int t2 = 0;
	int t3 = 0;
	long long next2 = 2;
	long long next3 = 3;

	while (true) {
		long long next = std::min(next2, next3);
		if (next > n) break;
		a.push_back(next);

		if (next == next2) {
		t2++;
		next2 = a[t2] * 2;
		}

		if (next == next3) {
		t3++;
		next3 = a[t3] * 3;
		}
	}
	std::reverse(a.begin(), a.end());
}