#include <vector>
#include <gtest/gtest.h>
#include "MergeStoreclass.hpp"

/**
 * @file MergeSortTests.cpp
 * @brief Zawiera testy jednostkowe dla algorytmu MergeSort.
 */

 /**
  * @test MergeSortTests.RandomArray
  * @brief Testuje działanie algorytmu MergeSort na tablicy o losowej kolejności elementów.
  *
  * Test weryfikuje, czy algorytm poprawnie sortuje tablicę zawierającą elementy
  * w przypadkowej kolejności. Oczekiwanym wynikiem jest posortowana tablica
  * w porządku rosnącym.
  *
  * - Wejście: Tablica {38, 27, 43, 3, 9, 82, 10}.
  * - Oczekiwane wyjście: Tablica {3, 9, 10, 27, 38, 43, 82}.
  */
TEST(MergeSortTests, RandomArray) {
    std::vector<int> arr = { 38, 27, 43, 3, 9, 82, 10 }; ///< Tablica wejściowa z losową kolejnością elementów.
    MergeSort::sort(arr); ///< Wywołanie algorytmu MergeSort.
    EXPECT_EQ(arr, (std::vector<int>{3, 9, 10, 27, 38, 43, 82})); ///< Weryfikacja wyniku sortowania.
}
