#pragma once

class Sort {
 public:
  static Sort& getInstance() {
    static Sort instance;  // Guaranteed to be destroyed.
                        // Instantiated on first use.
    return instance;
  }

 private:
  Sort() {}  // Constructor? (the {} brackets) are needed here.

 public:
  Sort(Sort const&) = delete;
  void operator=(Sort const&) = delete;
  void mergeSort(int array[], int startIndex, int endIndex);
};
