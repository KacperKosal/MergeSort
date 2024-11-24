#include <vector>
#include <gtest/gtest.h>

#include "MergeStoreclass.hpp"
// Test sprawdzający, czy algorytm poprawnie sortuje większą tablicę.
TEST(MergeSortTests, LargeArray) {
    std::vector<int> arr = { 100, 30, 10, 90, 60, 50, 20, 80, 70, 40 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{10, 20, 30, 40, 50, 60, 70, 80, 90, 100}));
}