#include "io.hpp"
#include "merge_sort.hpp"
#include "pairs_with_sum.hpp"
#include <iostream>

int main() {
	int* arr = nullptr;
	int size = 0;
	
	rwh::io::input_array(arr, size);
	
	if (arr == nullptr || size <= 0) {
		std::cout << "Некорректный размер массива." << std::endl;
		return 0;
	}
	
	const long long target_sum = rwh::io::input_target_sum();
	rwh::sorting::merge_sort(arr, 0, size - 1);
	rwh::io::print_array("Отсортированный массив:", arr, size);
	std::cout << "Пары с суммой " << target_sum << ":" << std::endl;
	rwh::pairs::find_pairs_with_sum(arr, size, target_sum);
	
	delete[] arr;
	return 0;
}