#include <vector>
#include <gtest/gtest.h>
#include "MergeStoreclass.hpp"

/**
 * @file MergeSortTests.cpp
 * @brief Zawiera testy jednostkowe dla algorytmu MergeSort.
 */

 /**
  * @test MergeSortTests.LargeArray
  * @brief Testuje działanie algorytmu MergeSort na większej tablicy.
  *
  * Test sprawdza, czy algorytm prawidłowo sortuje większą tablicę z różnymi liczbami.
  * Po posortowaniu elementy powinny być uporządkowane rosnąco.
  *
  * - Wejście: Tablica {100, 30, 10, 90, 60, 50, 20, 80, 70, 40}.
  * - Oczekiwane wyjście: Tablica posortowana w porządku rosnącym {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}.
  */
TEST(MergeSortTests, LargeArray) {
    std::vector<int> arr = { 100, 30, 10, 90, 60, 50, 20, 80, 70, 40 }; ///< Tablica wejściowa z większymi liczbami.
    MergeSort::sort(arr); ///< Wywołanie algorytmu MergeSort.
    EXPECT_EQ(arr, (std::vector<int>{10, 20, 30, 40, 50, 60, 70, 80, 90, 100})); ///< Sprawdzenie, czy tablica jest posortowana.
}
