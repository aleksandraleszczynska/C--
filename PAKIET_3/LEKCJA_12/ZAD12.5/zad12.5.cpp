// Napisz program, który posortuje tablicę rosnąco za pomocą zmodyfikowanego algorytmu sortowania szybkiego, w którtym pivotem jest środkowy element badanego podproblemu.

#include <iostream>

using namespace std;

void quicksort(int tab[], int lewy, int prawy)
{
    int liczniklewyIndex = lewy;
    int licznikprawyIndex = prawy;
    int pivot = tab[(lewy + prawy) / 2];

    while (liczniklewyIndex <= licznikprawyIndex)
    {
        while (tab[liczniklewyIndex] < pivot)
        {
            liczniklewyIndex++;
        }
        while (tab[licznikprawyIndex] > pivot)
        {
            licznikprawyIndex--;
        }
        if (liczniklewyIndex <= licznikprawyIndex)
        {
            swap(tab[liczniklewyIndex], tab[licznikprawyIndex]);
            liczniklewyIndex++;
            licznikprawyIndex--;
        }
    }

    if (lewy < licznikprawyIndex)
    {
        quicksort(tab, lewy, licznikprawyIndex);
    }
    if (prawy > liczniklewyIndex)
    {
        quicksort(tab, liczniklewyIndex, prawy);
    }
}

int main()
{
    int tablica[5] = {3, 6, 7, 1, 4};
    int lewy = 0;
    int prawy = 4;
    quicksort(tablica, lewy, prawy);

    for (int i = 0; i < 5; i++)
    {
        cout << tablica[i] << " ";
    }

    return 0;
}