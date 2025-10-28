#include "pairs_with_sum.hpp"
#include <iostream>

void rwh::pairs::find_pairs_with_sum(const int* const arr, const int size, const long long target_sum) {
	int left = 0;
	int right = size - 1;
	int count = 0;
	
	while (left < right) {
		const long long sum = static_cast<long long>(arr[left]) + arr[right];
		if (sum == target_sum) {
			std::cout << arr[left] << " " << arr[right] << std::endl;
			++count;
			++left;
			--right;
		} else if (sum < target_sum) {
			++left;
		} else {
			--right;
		}
	}
	if (count == 0) {
		std::cout << "Пары с нужной суммой не найдены." << std::endl;
	}
}