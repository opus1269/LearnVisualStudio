#pragma once

namespace mysort {

template <class T, int N>
void mergeSort(T (&arr)[N], int beg, int end);

namespace {

template <class T, int N>
void merge(T (&arr)[N], int beg, int end);

}

}  // namespace mysort

#include "Sort.inl"
