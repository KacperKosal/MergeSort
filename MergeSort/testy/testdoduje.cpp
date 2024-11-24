#include <vector>
#include <gtest/gtest.h>
#include "MergeStoreclass.hpp"

/**
 * @file MergeSortTests.cpp
 * @brief Zawiera testy jednostkowe dla algorytmu MergeSort.
 */

 /**
  * @test MergeSortTests.NegativeAndPositiveNumbers
  * @brief Testuje poprawność działania algorytmu MergeSort dla tablicy zawierającej zarówno liczby ujemne, jak i dodatnie.
  *
  * Test weryfikuje, czy algorytm sortowania poprawnie obsługuje mieszane dane (ujemne i dodatnie wartości),
  * sortując je w porządku rosnącym.
  *
  * - Wejście: Tablica {-1, -5, 3, 2, -4}.
  * - Oczekiwane wyjście: Tablica {-5, -4, -1, 2, 3}.
  */
TEST(MergeSortTests, NegativeAndPositiveNumbers) {
    std::vector<int> arr = { -1, -5, 3, 2, -4 }; // Tablica wejściowa.
    MergeSort::sort(arr); // Wywołanie algorytmu MergeSort.
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -1, 2, 3})); // Sprawdzenie wyniku.
}
