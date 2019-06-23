#pragma once
#include <iterator>  // for std::size_t

namespace mysort {
using std::size_t;

template <class T, size_t N>
void mergeSort(T (&arr)[N], size_t beg, size_t end) {
  if (beg == end) {
    return;
  }

  auto mid = (beg + end) / 2;
  mergeSort(arr, beg, mid);
  mergeSort(arr, mid + 1, end);

  mysort::merge(arr, beg, end);
}

namespace {

template <class T, size_t N>
void merge(T (&arr)[N], size_t beg, size_t end) {
  auto mid = (beg + end) / 2;
  auto i = beg;
  auto j = mid + 1;
  auto len = end - beg + 1;
  T *temp = new T[len];

  for (size_t k = 0; k < len; k++) {
    if ((j > end) || ((i <= mid) && (arr[i] < arr[j]))) {
      temp[k] = arr[i];
      i++;
    } else {
      temp[k] = arr[j];
      j++;
    }
  }

  for (size_t k = 0, i = beg; k < len; k++, i++) {
    arr[i] = temp[k];
  }

  delete[] temp;
}

}  // namespace

}  // namespace mysort
