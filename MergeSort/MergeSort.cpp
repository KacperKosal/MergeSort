#include <iostream>
#include <vector>
#include "MergeStoreclass.hpp"

/**
 * @file main.cpp
 * @brief Program demonstrujący użycie algorytmu sortowania przez scalanie (MergeSort).
 *
 * Program tworzy przykładową tablicę liczb całkowitych, wypisuje ją, sortuje
 * za pomocą algorytmu MergeSort, a następnie wypisuje posortowaną tablicę.
 */

 /**
  * @brief Punkt wejścia programu.
  *
  * Funkcja tworzy przykładową tablicę, wypisuje jej elementy, sortuje je za pomocą
  * klasy MergeSort, a następnie wypisuje wynik.
  *
  * @return Zwraca 0 w przypadku powodzenia.
  */
int main() {
    // Tworzymy przykładową tablicę
    /**
     * @brief Przykładowa tablica liczb całkowitych do posortowania.
     */
    std::vector<int> arr = { 38, 27, 43, 3, 9, 82, 10 };

    // Wypisujemy oryginalną tablicę
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    // Sortujemy tablicę
    /**
     * @brief Sortowanie tablicy za pomocą algorytmu MergeSort.
     */
    MergeSort::sort(arr);

    // Wypisujemy posortowaną tablicę
    std::cout << "\nSorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
