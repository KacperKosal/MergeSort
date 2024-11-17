#include "MergeStoreclass.hpp"

void MergeSort::merge(std::vector<int>& arr, int left, int right) {
    // Sprawdzenie, czy podtablica zawiera jeden lub mniej elementów
    // (ju¿ posortowana)
    if (left >= right) return;

    // Obliczenie indeksu œrodkowego podtablicy
    int mid = left + (right - left) / 2;

    // Rekurencyjne wywo³anie na lewej po³owie tablicy
    mergeSort(arr, left, mid);

    // Rekurencyjne wywo³anie na prawej po³owie tablicy
    mergeSort(arr, mid + 1, right);

    // Tworzenie tymczasowej tablicy do przechowywania posortowanych elementów
    std::vector<int> temp(right - left + 1);

    // Indeksy do œledzenia pozycji w lewej (i), prawej (j) po³owie oraz w tablicy temp (k)
    int i = left, j = mid + 1, k = 0;

    // Scalanie elementów z obu po³ówek tablicy do tablicy temp
    while (i <= mid && j <= right) {
        // Jeœli element w lewej po³owie jest mniejszy lub równy elementowi w prawej po³owie
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];  // Wstawiamy element z lewej po³owy do temp
        }
        else {
            temp[k++] = arr[j++];  // Wstawiamy element z prawej po³owy do temp
        }
    }

    // Jeœli pozosta³y elementy w lewej po³owie (przekopiowujemy je do temp)
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Jeœli pozosta³y elementy w prawej po³owie (przekopiowujemy je do temp)
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Kopiowanie posortowanych elementów z powrotem do oryginalnej tablicy arr
    for (i = left, k = 0; i <= right; ++i, ++k) {
        arr[i] = temp[k];
    }
}