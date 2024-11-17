#include <vector>

/**
 * \class MergeSort
 * \brief Klasa implementuj¹ca algorytm sortowania przez scalanie (MergeSort).
 *
 * Klasa ta zawiera metody do sortowania tablicy liczb ca³kowitych przy
 * u¿yciu algorytmu MergeSort. Sortowanie jest wykonywane w sposób
 * rekurencyjny, dziel¹c tablicê na czêœci, a nastêpnie scalaj¹c je w
 * sposób posortowany.
 */
class MergeSort {
public:
    /**
     * \brief Sortuje przekazan¹ tablicê za pomoc¹ algorytmu MergeSort.
     *
     * Ta metoda jest wywo³ywana w celu posortowania ca³ej tablicy. Algorytm
     * dzia³a w sposób rekurencyjny, dziel¹c tablicê na mniejsze czêœci i
     * scalaj¹c je w sposób uporz¹dkowany.
     *
     * \param arr Tablica liczb ca³kowitych do posortowania.
     * \return Brak (sortowanie odbywa siê w miejscu na oryginalnej tablicy).
     */
    static void sort(std::vector<int>& arr);

private:
    /**
     * \brief Pomocnicza funkcja do scalenia dwóch posortowanych czêœci tablicy.
     *
     * Funkcja ta ³¹czy dwie posortowane czêœci tablicy w jedn¹ uporz¹dkowan¹
     * czêœæ. Jest wywo³ywana po podziale tablicy na mniejsze czêœci.
     *
     * \param arr Tablica, która zawiera czêœci do scalania.
     * \param left Indeks pocz¹tkowy lewej czêœci tablicy.
     * \param right Indeks koñcowy prawej czêœci tablicy.
     */
    static void merge(std::vector<int>& arr, int left, int right);

    /**
     * \brief Rekursywnie dzieli tablicê na czêœci i sortuje je.
     *
     * Funkcja ta dzieli tablicê na mniejsze czêœci, a¿ do momentu, gdy ka¿da
     * czêœæ bêdzie zawieraæ tylko jeden element. Nastêpnie wywo³uje funkcjê
     * \ref merge, aby po³¹czyæ posortowane czêœci.
     *
     * \param arr Tablica do posortowania.
     * \param left Indeks pocz¹tkowy aktualnej czêœci tablicy.
     * \param right Indeks koñcowy aktualnej czêœci tablicy.
     */
    static void mergeSort(std::vector<int>& arr, int left, int right);
};

