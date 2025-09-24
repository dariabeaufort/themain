#include "shell_sort.hpp"

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <limits>

using namespace std;
using namespace std::chrono;

int main() {
	
	int n;
	cin >> n;
	if (n <= 0) return 0;
	
	random_device rd;
	mt19937 rng(rd());
	
	uniform_int_distribution<int> dist(0, numeric_limits<int>::max());
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		a[i] = dist(rng);
	}
	
	vector<int> a1 = a;
	vector<int> a2 = a;
	
	auto start_shell = steady_clock::now();
	shell_sort(a1);
	auto end_shell = steady_clock::now();
	duration<double> elapsed_seconds_shell = end_shell - start_shell;
	
	auto start_sort = steady_clock::now();
	sort(a2.begin(), a2.end());
	auto end_sort = steady_clock::now();
	duration<double> elapsed_seconds_sort = end_sort - start_sort;
	
	if (elapsed_seconds_shell > elapsed_seconds_sort) {
		cout << "max time - elapsed_seconds_shell: " << elapsed_seconds_shell.count() << "s\n";
		cout << "min time - elapsed_seconds_sort: " << elapsed_seconds_sort.count() << "s\n";
	} else if (elapsed_seconds_shell < elapsed_seconds_sort) {
		cout << "max time - elapsed_seconds_sort: " << elapsed_seconds_sort.count() << "s\n";
		cout << "min time - elapsed_seconds_shell: " << elapsed_seconds_shell.count() << "s\n";
	} else {
		cout << "times are equal: " << elapsed_seconds_sort.count() << "s\n";
	} 
	
	return 0;
}