#include <vector>

/**
 * \class MergeSort
 * \brief Klasa implementująca algorytm sortowania przez scalanie (MergeSort).
 *
 * Klasa ta zawiera metody do sortowania tablicy liczb całkowitych przy
 * użyciu algorytmu MergeSort. Sortowanie jest wykonywane w sposób
 * rekurencyjny, dzieląc tablicę na części, a następnie scalając je w
 * sposób posortowany.
 */
class MergeSort {
public:
    /**
     * \brief Sortuje przekazaną tablicę za pomocą algorytmu MergeSort.
     *
     * Ta metoda jest wywoływana w celu posortowania całej tablicy. Algorytm
     * działa w sposób rekurencyjny, dzieląc tablicę na mniejsze części i
     * scalając je w sposób uporządkowany.
     *
     * \param arr Tablica liczb całkowitych do posortowania.
     * \return Brak (sortowanie odbywa się w miejscu na oryginalnej tablicy).
     */
    static void sort(std::vector<int>& arr);

private:
    /**
     * \brief Pomocnicza funkcja do scalenia dwóch posortowanych części tablicy.
     *
     * Funkcja ta łączy dwie posortowane części tablicy w jedną uporządkowaną
     * część. Jest wywoływana po podziale tablicy na mniejsze części.
     *
     * \param arr Tablica, która zawiera części do scalania.
     * \param left Indeks początkowy lewej części tablicy.
     * \param right Indeks końcowy prawej części tablicy.
     */
    static void merge(std::vector<int>& arr, int left, int right);

    /**
     * \brief Rekursywnie dzieli tablicę na części i sortuje je.
     *
     * Funkcja ta dzieli tablicę na mniejsze części, aż do momentu, gdy każda
     * część będzie zawierać tylko jeden element. Następnie wywołuje funkcję
     * \ref merge, aby połączyć posortowane części.
     *
     * \param arr Tablica do posortowania.
     * \param left Indeks początkowy aktualnej części tablicy.
     * \param right Indeks końcowy aktualnej części tablicy.
     */
    static void mergeSort(std::vector<int>& arr, int left, int right);
};

