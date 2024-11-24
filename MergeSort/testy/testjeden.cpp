#include <vector>
#include <gtest/gtest.h>

#include "MergeStoreclass.hpp"
// Test sprawdzający działanie algorytmu na tablicy zawierającej jeden element.
// Oczekujemy, że tablica pozostanie bez zmian.
TEST(MergeSortTests, SingleElementArray) {
    std::vector<int> arr = { 42 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{42}));
}