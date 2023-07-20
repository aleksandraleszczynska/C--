// Napisz program, który posortuje tablicę malejąco za pomocą algorytmu sortowania szybkiego.

#include <iostream>

using namespace std;

void quicksort(int tablica[], int lewyindex, int prawyindex)
{

    int pivot = tablica[prawyindex];
    int licznikIndex = lewyindex;
    int granica = lewyindex - 1;

    if (lewyindex >= prawyindex)
    {
        return;
    }

    while (licznikIndex < prawyindex)
    {
        if (tablica[licznikIndex] > pivot)
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
        swap(tablica[granica], tablica[prawyindex]);
    }

    quicksort(tablica, lewyindex, granica - 1);
    quicksort(tablica, granica + 1, prawyindex);
}

int main()
{
    int tablica[9] = {8, 1, 2, 3, 7, 8, 2, 1, 4};
    int lewyindex = 0;
    int prawyindex = 8;
    quicksort(tablica, lewyindex, prawyindex);

    for (int i = 0; i < 9; i++)
    {
        cout << tablica[i] << " ";
    }

    return 0;
}