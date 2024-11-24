#include <vector>
#include <gtest/gtest.h>

#include "MergeStoreclass.hpp"
// Test sprawdzający, czy algorytm poprawnie sortuje tablicę w odwrotnej kolejności.
TEST(MergeSortTests, ReversedArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}