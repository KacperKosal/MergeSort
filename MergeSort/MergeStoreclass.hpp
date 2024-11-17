#include <vector>

/**
 * \class MergeSort
 * \brief Klasa implementuj�ca algorytm sortowania przez scalanie (MergeSort).
 *
 * Klasa ta zawiera metody do sortowania tablicy liczb ca�kowitych przy
 * u�yciu algorytmu MergeSort. Sortowanie jest wykonywane w spos�b
 * rekurencyjny, dziel�c tablic� na cz�ci, a nast�pnie scalaj�c je w
 * spos�b posortowany.
 */
class MergeSort {
public:
    /**
     * \brief Sortuje przekazan� tablic� za pomoc� algorytmu MergeSort.
     *
     * Ta metoda jest wywo�ywana w celu posortowania ca�ej tablicy. Algorytm
     * dzia�a w spos�b rekurencyjny, dziel�c tablic� na mniejsze cz�ci i
     * scalaj�c je w spos�b uporz�dkowany.
     *
     * \param arr Tablica liczb ca�kowitych do posortowania.
     * \return Brak (sortowanie odbywa si� w miejscu na oryginalnej tablicy).
     */
    static void sort(std::vector<int>& arr);

private:
    /**
     * \brief Pomocnicza funkcja do scalenia dw�ch posortowanych cz�ci tablicy.
     *
     * Funkcja ta ��czy dwie posortowane cz�ci tablicy w jedn� uporz�dkowan�
     * cz��. Jest wywo�ywana po podziale tablicy na mniejsze cz�ci.
     *
     * \param arr Tablica, kt�ra zawiera cz�ci do scalania.
     * \param left Indeks pocz�tkowy lewej cz�ci tablicy.
     * \param right Indeks ko�cowy prawej cz�ci tablicy.
     */
    static void merge(std::vector<int>& arr, int left, int right);

    /**
     * \brief Rekursywnie dzieli tablic� na cz�ci i sortuje je.
     *
     * Funkcja ta dzieli tablic� na mniejsze cz�ci, a� do momentu, gdy ka�da
     * cz�� b�dzie zawiera� tylko jeden element. Nast�pnie wywo�uje funkcj�
     * \ref merge, aby po��czy� posortowane cz�ci.
     *
     * \param arr Tablica do posortowania.
     * \param left Indeks pocz�tkowy aktualnej cz�ci tablicy.
     * \param right Indeks ko�cowy aktualnej cz�ci tablicy.
     */
    static void mergeSort(std::vector<int>& arr, int left, int right);
};

