#include <iostream>
#include <vector>
#include "MergeStoreclass.hpp"

int main() {
    // Tworzymy przykładową tablicę
    std::vector<int> arr = { 38, 27, 43, 3, 9, 82, 10 };

    // Wypisujemy oryginalną tablicę
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    // Sortujemy tablicę
    MergeSort::sort(arr);

    // Wypisujemy posortowaną tablicę
    std::cout << "\nSorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}