#include "io.hpp"
#include <iostream>

void rwh::io::print_array(const char* const comment, const int* const arr, const int size) {
	std::cout << comment << std::endl;
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void rwh::io::input_array(int*& arr, int& size) {
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	
	if (size <= 0) {
		arr = nullptr;
		return;
	}
	
	arr = new int[size];
	std::cout << "Введите элементы массива: " << std::endl;
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
}
long long rwh::io::input_target_sum() {
	long long target_sum;
	std::cout << "Введите сумму для поиска пар: ";
	std::cin >> target_sum;
	return target_sum;
}