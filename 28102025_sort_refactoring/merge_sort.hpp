#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

namespace rwh {
	namespace sorting {
		void merge_sort(int* const arr, const int left, const int right);
		void merge(int* const arr, const int left, const int mid, const int right);
	}
}

#endif