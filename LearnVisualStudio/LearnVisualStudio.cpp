// LearnVisualStudio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator>  // for std::size

#include "Point.h"
#include "Line.h"

#include "Sort.h"

int main() {
  Point p1 = Point();
  Point p2 = Point(3, 4);
  Line line = Line(p1, p2);
  double length = line.length();

  std::cout << p1 << " " << p2 << " length: " << length << '\n';

  int arr[] = {7, 2, -5, 6, 4444, 11, 3};
  std::cout << "The array has: " << std::size(arr) << " elements\n";
  for (size_t i = 0; i < std::size(arr); i++) {
    std::cout << i << ": " << arr[i] << '\n';
  }

  Sort::getInstance().mergeSort(arr, 0, std::size(arr) - 1);
  std::cout << "\nSorted:\n";
  for (size_t i = 0; i < std::size(arr); i++) {
    std::cout << i << ": " << arr[i] << '\n';
  }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
