// Napisz program, który posortuje tablicę malejąco za pomocą algorytmu sortowania przez scalanie.

#include <iostream>
using namespace std;

void merge(int tablica[], int lewyIndex, int pivot, int prawyIndex, int pomocniczaTablica[])
{
    for (int i = lewyIndex; i <= prawyIndex; i++)
    {
        pomocniczaTablica[i] = tablica[i];
    }

    int indexLewejStrony = lewyIndex;
    int indexPrawejStrony = pivot + 1;
    int index = lewyIndex;

    while (indexLewejStrony <= pivot && indexPrawejStrony <= prawyIndex)
    {
        if (pomocniczaTablica[indexLewejStrony] >= pomocniczaTablica[indexPrawejStrony])
        {
            tablica[index] = pomocniczaTablica[indexLewejStrony];
            indexLewejStrony++;
        }
        else
        {
            tablica[index] = pomocniczaTablica[indexPrawejStrony];
            indexPrawejStrony++;
        }

        index++;
    }

    while (indexLewejStrony <= pivot)
    {
        tablica[index] = pomocniczaTablica[indexLewejStrony];
        index++;
        indexLewejStrony++;
    }
}

void mergerSort(int tablica[], int lewyIndex, int prawyIndex, int pomocniczaTablica[])
{
    if (lewyIndex != prawyIndex)
    {
        int pivot = (lewyIndex + prawyIndex) / 2;
        mergerSort(tablica, lewyIndex, pivot, pomocniczaTablica);
        mergerSort(tablica, pivot + 1, prawyIndex, pomocniczaTablica);
        merge(tablica, lewyIndex, pivot, prawyIndex, pomocniczaTablica);
    }
}

int main()
{
    int tablica[8] = {5, 8, 7, 2, 3, 2, 6, 8};
    int lewyIndex = 0;
    int prawyIndex = 7;
    int pomocnicznaTablica[8];
    mergerSort(tablica, lewyIndex, prawyIndex, pomocnicznaTablica);

    for (int i = 0; i < 8; i++)
    {
        cout << tablica[i] << " ";
    }
    return 0;
}