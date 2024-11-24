#include "MergeStoreclass.hpp"

/**
 * @file MergeStoreclass.cpp
 * @brief Implementacja algorytmu sortowania przez scalanie (MergeSort).
 */

 /**
  * @brief Łączy dwie posortowane części tablicy w jedną uporządkowaną część.
  *
  * Funkcja odpowiedzialna za scalanie dwóch części tablicy w jedną, posortowaną część.
  * Działa na przekazanej tablicy, wykorzystując indeksy do określenia zakresów.
  *
  * @param arr Tablica liczb całkowitych do scalania.
  * @param left Indeks początkowy zakresu do scalania.
  * @param right Indeks końcowy zakresu do scalania.
  */
void MergeSort::merge(std::vector<int>& arr, int left, int right) {
    if (left >= right) return; // Jeśli zakres zawiera jeden element, jest posortowany.

    int mid = left + (right - left) / 2; // Obliczenie punktu środkowego.

    // Rekurencyjne sortowanie lewej i prawej części tablicy.
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Tworzenie tymczasowej tablicy na scalone elementy.
    std::vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    // Scalanie elementów z lewej i prawej połowy.
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }

    // Dodawanie pozostałych elementów z lewej połowy.
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Dodawanie pozostałych elementów z prawej połowy.
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Kopiowanie posortowanych elementów do oryginalnej tablicy.
    for (i = left, k = 0; i <= right; ++i, ++k) {
        arr[i] = temp[k];
    }
}

/**
 * @brief Rekurencyjnie dzieli tablicę na części i sortuje je.
 *
 * Funkcja dzieli tablicę na coraz mniejsze części (podtablice),
 * aż każda będzie zawierała pojedynczy element. Następnie scala je,
 * tworząc uporządkowaną tablicę.
 *
 * @param arr Tablica liczb całkowitych do posortowania.
 * @param left Indeks początkowy aktualnego zakresu.
 * @param right Indeks końcowy aktualnego zakresu.
 */
void MergeSort::mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Obliczanie punktu środkowego.

        // Sortowanie lewej i prawej połowy tablicy.
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Scalanie posortowanych części.
        merge(arr, left, right);
    }
}

/**
 * @brief Sortuje całą tablicę liczb całkowitych.
 *
 * Funkcja jest punktem wejścia do sortowania całej tablicy. Wywołuje rekurencyjną
 * metodę `mergeSort`, która dzieli tablicę na mniejsze części i je sortuje.
 *
 * @param arr Tablica liczb całkowitych do posortowania.
 */
void MergeSort::sort(std::vector<int>& arr) {
    mergeSort(arr, 0, arr.size() - 1); // Rozpoczyna sortowanie od całej tablicy.
}
