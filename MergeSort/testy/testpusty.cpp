#include <vector>
#include <gtest/gtest.h>

#include "MergeStoreclass.hpp"
// Test sprawdzający działanie algorytmu na pustej tablicy.
// Oczekujemy, że algorytm nie wprowadzi zmian.
TEST(MergeSortTests, EmptyArray) {
    std::vector<int> arr = {};
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{}));
}