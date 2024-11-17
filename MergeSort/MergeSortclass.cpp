#include "MergeStoreclass.hpp"

void MergeSort::merge(std::vector<int>& arr, int left, int right) {
    // Sprawdzenie, czy podtablica zawiera jeden lub mniej element�w
    // (ju� posortowana)
    if (left >= right) return;

    // Obliczenie indeksu �rodkowego podtablicy
    int mid = left + (right - left) / 2;

    // Rekurencyjne wywo�anie na lewej po�owie tablicy
    mergeSort(arr, left, mid);

    // Rekurencyjne wywo�anie na prawej po�owie tablicy
    mergeSort(arr, mid + 1, right);

    // Tworzenie tymczasowej tablicy do przechowywania posortowanych element�w
    std::vector<int> temp(right - left + 1);

    // Indeksy do �ledzenia pozycji w lewej (i), prawej (j) po�owie oraz w tablicy temp (k)
    int i = left, j = mid + 1, k = 0;

    // Scalanie element�w z obu po��wek tablicy do tablicy temp
    while (i <= mid && j <= right) {
        // Je�li element w lewej po�owie jest mniejszy lub r�wny elementowi w prawej po�owie
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];  // Wstawiamy element z lewej po�owy do temp
        }
        else {
            temp[k++] = arr[j++];  // Wstawiamy element z prawej po�owy do temp
        }
    }

    // Je�li pozosta�y elementy w lewej po�owie (przekopiowujemy je do temp)
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Je�li pozosta�y elementy w prawej po�owie (przekopiowujemy je do temp)
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Kopiowanie posortowanych element�w z powrotem do oryginalnej tablicy arr
    for (i = left, k = 0; i <= right; ++i, ++k) {
        arr[i] = temp[k];
    }
}