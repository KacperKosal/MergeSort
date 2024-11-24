#include <vector>
#include <gtest/gtest.h>

#include "MergeStoreclass.hpp"
// Test sprawdzający, czy algorytm poprawnie sortuje tablicę o losowej kolejności elementów.
TEST(MergeSortTests, RandomArray) {
    std::vector<int> arr = { 38, 27, 43, 3, 9, 82, 10 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{3, 9, 10, 27, 38, 43, 82}));
}