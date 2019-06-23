#pragma once
#include <iterator>  // for std::size_t

namespace mysort {
using std::size_t;

template <class T, size_t N>
void mergeSort(T (&arr)[N], size_t beg, size_t end);

namespace {

template <class T, size_t N>
void merge(T (&arr)[N], size_t beg, size_t end);

}

}  // namespace mysort

// template definitions
#include "Sort.inl"
