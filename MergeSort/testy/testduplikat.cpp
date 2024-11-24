#include <vector>
#include <gtest/gtest.h>

#include "MergeStoreclass.hpp"
// Test sprawdzający, czy algorytm poprawnie sortuje tablicę zawierającą duplikaty.
TEST(MergeSortTests, DuplicatesArray) {
    std::vector<int> arr = { 3, 3, 1, 2, 2 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 2, 3, 3}));
}