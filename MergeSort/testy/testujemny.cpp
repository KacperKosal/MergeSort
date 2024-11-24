#include <vector>
#include <gtest/gtest.h>
#include "MergeStoreclass.hpp"

/**
 * @file MergeSortTests.cpp
 * @brief Zawiera testy jednostkowe dla algorytmu MergeSort.
 */

 /**
  * @test MergeSortTests.NegativeNumbers
  * @brief Testuje działanie algorytmu MergeSort na tablicy zawierającej liczby ujemne.
  *
  * Test sprawdza, czy algorytm prawidłowo sortuje tablicę zawierającą liczby ujemne.
  * Po posortowaniu liczby powinny być uporządkowane rosnąco.
  *
  * - Wejście: Tablica zawierająca liczby ujemne {-1, -5, -3, -2, -4}.
  * - Oczekiwane wyjście: Tablica posortowana w porządku rosnącym {-5, -4, -3, -2, -1}.
  */
TEST(MergeSortTests, NegativeNumbers) {
    std::vector<int> arr = { -1, -5, -3, -2, -4 }; ///< Tablica wejściowa z liczbami ujemnymi.
    MergeSort::sort(arr); ///< Wywołanie algorytmu MergeSort.
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -3, -2, -1})); ///< Sprawdzenie, czy tablica jest posortowana.
}
