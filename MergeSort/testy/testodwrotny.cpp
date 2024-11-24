#include <vector>
#include <gtest/gtest.h>
#include "MergeStoreclass.hpp"

/**
 * @file MergeSortTests.cpp
 * @brief Zawiera testy jednostkowe dla algorytmu MergeSort.
 */

 /**
  * @test MergeSortTests.ReversedArray
  * @brief Testuje działanie algorytmu MergeSort na tablicy w odwrotnej kolejności.
  *
  * Test sprawdza, czy algorytm prawidłowo sortuje tablicę, w której elementy
  * są uporządkowane w porządku malejącym. Po sortowaniu elementy w tablicy
  * powinny być uporządkowane rosnąco.
  *
  * - Wejście: Tablica {5, 4, 3, 2, 1}.
  * - Oczekiwane wyjście: Tablica {1, 2, 3, 4, 5}.
  */
TEST(MergeSortTests, ReversedArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 }; ///< Tablica wejściowa z elementami w odwrotnej kolejności.
    MergeSort::sort(arr); ///< Wywołanie algorytmu MergeSort.
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5})); ///< Sprawdzenie, czy wynik jest zgodny z oczekiwaniami.
}
