//Napisz program, który posortuje tablicę rosnąco za pomocą zmodyfikowanego algorytmu sortowania szybkiego, w którtym pivotem jest losowy indeks z przedziału od lewegoIndexu do prawego, wykonywanego podproblemu. Losowanie liczby z danego zakresu znajdziesz z użyciem wujka google 😃

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void quicksort(int tablica[], int lewyindex, int prawyindex)
{
    int licznikIndex = lewyindex;
    int granica = lewyindex - 1;
    int pivot = tablica[lewyindex + rand() % (prawyindex-lewyindex +1)];

    if (lewyindex >= prawyindex)
    {
        return;
    }

    while (licznikIndex <= prawyindex)
    {
        if (tablica[licznikIndex] < pivot)
        {
            granica++;
            if (granica != licznikIndex)
            {
                swap(tablica[granica], tablica[licznikIndex]);
            }
        }

        licznikIndex++;
    }

    granica++;
    if (granica != prawyindex)
    {
        swap(tablica[granica], tablica[pivot]);
        pivot = granica;
    }

    quicksort(tablica, lewyindex, granica - 1);
    quicksort(tablica, granica + 1, prawyindex);
}

int main()
{
    int tablica[7] = {1, 5, 2, 7, 1, 3, 4};
    int lewy = 0;
    int prawy = 6;
    quicksort(tablica, lewy, prawy);

    for (int i = 0; i < 7; i++)
    {
        cout << tablica[i] << " ";
    }

    return 0;
}