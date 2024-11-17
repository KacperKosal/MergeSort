#include <iostream>
#include <vector>
#include "MergeStoreclass.hpp"

int main() {
    std::vector<int> arr = { 38, 27, 43, 3, 9, 82, 10 };

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    MergeSort::sort(arr);

    std::cout << "\nSorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
