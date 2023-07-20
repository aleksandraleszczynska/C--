// Posortuj rosnąco tablicę 2wymiarową wierszami za pomocą algorytmu sortowanie rekurencyjnego.
// Końcowy wynik wyświetl w postaci tablicy 2 wymiarowej

#include <iostream>
#include <vector>
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
        if (pomocniczaTablica[indexLewejStrony] <= pomocniczaTablica[indexPrawejStrony])
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
    int wiersze = 3;
    int kolumny = 4;
    int tablica1[kolumny][wiersze];
    int lewyIndex = 0;
    int prawyIndex = 3;
    int Tablica3[kolumny][wiersze];
    int pomocniczaTablica[kolumny];
    int tablica4[kolumny];

    for (int j = 0; j < wiersze; j++)
    {
        for (int i = 0; i < kolumny; i++)
        {
            cin >> tablica1[j][i];
        }
    }

    for (int j = 0; j < wiersze; j++)
    {
        int tablica2[kolumny];

        for (int i = 0; i < kolumny; i++)
        {
            tablica2[i] = tablica1[j][i];
        }

        mergerSort(tablica2, lewyIndex, prawyIndex, pomocniczaTablica);

        for (int i = 0; i < kolumny; i++)
        {
            tablica4[i] = tablica2[i];
        }
    }

    for (int j = 0; j < wiersze; j++)
    {
        for (int i = 0; i < kolumny; i++)
        {
            cout << Tablica3[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
