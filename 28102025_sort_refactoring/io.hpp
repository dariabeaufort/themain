#ifndef IO_HPP
#define IO_HPP

namespace rwh {
	namespace io {
		void print_array(const char* comment, const int* const arr, const int size);
		void input_array(int*& arr, int& size);
		long long input_target_sum();
	}
}

#endif