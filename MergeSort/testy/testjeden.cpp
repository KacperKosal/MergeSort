#include <vector>
#include <gtest/gtest.h>
#include "MergeStoreclass.hpp"

/**
 * @file MergeSortTests.cpp
 * @brief Zawiera testy jednostkowe dla algorytmu MergeSort.
 */

 /**
  * @test MergeSortTests.SingleElementArray
  * @brief Testuje działanie algorytmu MergeSort na tablicy zawierającej jeden element.
  *
  * Test weryfikuje, czy algorytm poprawnie obsługuje przypadek, w którym
  * tablica wejściowa zawiera tylko jeden element. W takim przypadku tablica
  * powinna pozostać bez zmian.
  *
  * - Wejście: Tablica {42}.
  * - Oczekiwane wyjście: Tablica {42}.
  */
TEST(MergeSortTests, SingleElementArray) {
    std::vector<int> arr = { 42 }; ///< Tablica wejściowa zawierająca jeden element.
    MergeSort::sort(arr); ///< Wywołanie algorytmu MergeSort.
    EXPECT_EQ(arr, (std::vector<int>{42})); ///< Sprawdzenie, czy wynik jest zgodny z oczekiwaniami.
}
