#include "shell_sort.hpp"
#include "generatenumbers.hpp"

#include <vector>
using std::vector;

void shell_sort(std::vector<int>& a) {
	
	int n = a.size();
	vector<long long> s;
	generatenumbers(s, n);
	
	for(long long k : s) {
		if (k == 0) continue;
		
		for(int i = k; i < n; i++) {
			int c = a[i];
			int j = i;
			while((j >= k) && (a[j-k] > c)) {
				a[j] = a[j-k];
				j = j-k;
			}
			a[j] = c;
		}
	}
}