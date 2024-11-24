#include <vector>
#include <gtest/gtest.h>
#include "MergeStoreclass.hpp"

/**
 * @file MergeSortTests.cpp
 * @brief Zawiera testy jednostkowe dla algorytmu MergeSort.
 */

 /**
  * @test MergeSortTests.EmptyArray
  * @brief Testuje działanie algorytmu MergeSort na pustej tablicy.
  *
  * Test sprawdza, czy algorytm prawidłowo obsługuje przypadek pustej tablicy.
  * W przypadku pustej tablicy algorytm nie powinien wprowadzać żadnych zmian,
  * a wynikowa tablica powinna pozostać pusta.
  *
  * - Wejście: Pusta tablica {}.
  * - Oczekiwane wyjście: Pusta tablica {}.
  */
TEST(MergeSortTests, EmptyArray) {
    std::vector<int> arr = {}; ///< Pusta tablica wejściowa.
    MergeSort::sort(arr); ///< Wywołanie algorytmu MergeSort.
    EXPECT_EQ(arr, (std::vector<int>{})); ///< Sprawdzenie, czy wynik jest pustą tablicą.
}
