#include <vector>
#include <gtest/gtest.h>
#include "MergeStoreclass.hpp"

/**
 * @file MergeSortTests.cpp
 * @brief Zawiera testy jednostkowe dla algorytmu MergeSort.
 */

 /**
  * @test MergeSortTests.SortedArray
  * @brief Testuje działanie algorytmu MergeSort na już posortowanej tablicy.
  *
  * Test sprawdza, czy algorytm prawidłowo obsługuje przypadek tablicy,
  * która jest już posortowana. W takim przypadku algorytm nie powinien
  * wprowadzać żadnych zmian w tablicy.
  *
  * - Wejście: Tablica już posortowana {1, 2, 3, 4, 5}.
  * - Oczekiwane wyjście: Tablica pozostaje bez zmian {1, 2, 3, 4, 5}.
  */
TEST(MergeSortTests, SortedArray) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 }; ///< Już posortowana tablica wejściowa.
    MergeSort::sort(arr); ///< Wywołanie algorytmu MergeSort.
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5})); ///< Sprawdzenie, czy wynik jest taki sam jak wejście.
}
