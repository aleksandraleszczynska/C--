// Napisz program, który realizuję sortowanie kubełkowe, sortując ciąg malejąco.

#include <iostream>
using namespace std;

int NajwiekszaWartosc(int tablica[], int dlugosc)
{
    int max = tablica[0];

    for (int i = 0; i < dlugosc; i++)
    {
        if (tablica[i] > max)
        {
            max = tablica[i];
        }
    }
    return max;
}

void sortowanieKubelkowe(int tablica[], int dlugosc)
{
    int max = NajwiekszaWartosc(tablica, dlugosc);
    int tablica2[max + 1] = {0};

    for (int i = 0; i < dlugosc; i++)
    {
        int wartosc = tablica[i];
        tablica2[wartosc]++;
    }

    int index = 0;

    for (int i = max; i >= 0; i--)
    {
        if (tablica2[i] > 0)
        {
            for (int j = 0; j < tablica2[i]; j++)
            {
                tablica[index] = i;
                index++;
            }
        }
    }

    for (int i = 0; i < dlugosc; i++)
    {
        cout << tablica[i] << " ";
    }
}

int main()
{
    int dlugosc = 10;
    int liczby[dlugosc] = {1,1,3,9,6,4,7,2,1,3};
    sortowanieKubelkowe(liczby, dlugosc);
    return 0;
}