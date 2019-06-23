#include <iostream>  // for std::cout
#include <iterator>  // for std::size

#include "Sort.h"
namespace mysort {

void mergeSort(int arr[], int beg, int end) {
  if (beg == end) {
    return;
  }

  int mid = (beg + end) / 2;
  mergeSort(arr, beg, mid);
  mergeSort(arr, mid + 1, end);

  merge(arr, beg, end);
}

// anonymouse namespace to hide private stuff
namespace {

void merge(int arr[], int beg, int end) {
  int mid = (beg + end) / 2;
  int i = beg;
  int j = mid + 1;
  int len = end - beg + 1;
  int *temp = new int[len];

  for (int k = 0; k < len; k++) {
    if ((j > end) || ((i <= mid) && (arr[i] < arr[j]))) {
      temp[k] = arr[i];
      i++;
    } else {
      temp[k] = arr[j];
      j++;
    }
  }

  for (int k = 0, i = beg; k < len; k++, i++) {
    arr[i] = temp[k];
  }

  delete[] temp;
}

}  // namespace

}  // namespace mysort