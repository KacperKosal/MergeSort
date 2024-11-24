#include <vector>
#include <gtest/gtest.h>

#include "MergeStoreclass.hpp"
// Test sprawdzający, czy algorytm poprawnie sortuje tablicę zawierającą zarówno liczby ujemne, jak i dodatnie.
TEST(MergeSortTests, NegativeAndPositiveNumbers) {
    std::vector<int> arr = { -1, -5, 3, 2, -4 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -1, 2, 3}));
}
