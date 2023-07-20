// Napisz program, który posortuje litery napisu za pomocą algorytmu sortowania szybkiego.

#include <iostream>

using namespace std;

void quicksort(char napis[], int lewyindex, int prawyindex)
{
    int pivot = napis[prawyindex];
    int licznikIndex = lewyindex;
    int granica = lewyindex - 1;

    if (lewyindex >= prawyindex)
    {
        return;
    }

    while (licznikIndex < prawyindex)
    {
        if (napis[licznikIndex] < pivot)
        {
            granica++;
            if (granica != licznikIndex)
            {
                swap(napis[granica], napis[licznikIndex]);
            }
        }

        licznikIndex++;
    }

    granica++;
    if (granica != prawyindex)
    {
        swap(napis[granica], napis[prawyindex]);
    }

    quicksort(napis, lewyindex, granica - 1);
    quicksort(napis, granica + 1, prawyindex);
}

int main()
{
    char napis[] = "bacadae";
    int lewyindex = 0;
    int prawyindex = 6;
    quicksort(napis, lewyindex, prawyindex);
    cout << napis;
    return 0;
}