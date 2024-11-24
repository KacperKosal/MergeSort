#include <vector>
#include <gtest/gtest.h>
#include "MergeStoreclass.hpp"

/**
 * @file MergeSortTests.cpp
 * @brief Zawiera testy jednostkowe dla algorytmu MergeSort.
 */

 /**
  * @test MergeSortTests.DuplicatesArray
  * @brief Testuje działanie algorytmu MergeSort dla tablicy zawierającej duplikaty elementów.
  *
  * Test weryfikuje, czy algorytm sortowania poprawnie obsługuje tablicę, w której
  * znajdują się powtarzające się wartości, sortując je w porządku rosnącym.
  *
  * - Wejście: Tablica {3, 3, 1, 2, 2}.
  * - Oczekiwane wyjście: Tablica {1, 2, 2, 3, 3}.
  */
TEST(MergeSortTests, DuplicatesArray) {
    std::vector<int> arr = { 3, 3, 1, 2, 2 }; ///< Tablica wejściowa zawierająca duplikaty.
    MergeSort::sort(arr); ///< Wywołanie algorytmu MergeSort.
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 2, 3, 3})); ///< Sprawdzenie, czy wynik jest zgodny z oczekiwaniami.
}
