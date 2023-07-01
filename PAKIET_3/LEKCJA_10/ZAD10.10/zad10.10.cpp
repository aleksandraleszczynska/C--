// Napisz program, który realizuję sortowanie kubełkowe, dla liczb ujemnych.

#include <iostream>
#include <cmath>
using namespace std;

int NajmniejszaWartosc(int tablica[], int dlugosc)
{
    int min = tablica[0];

    for (int i = 0; i < dlugosc; i++)
    {
        if (tablica[i] < min)
        {
            min = tablica[i];
        }
    }
    return min;
}

void sortowanieKubelkowe(int tablica[], int dlugosc)
{
    int min = NajmniejszaWartosc(tablica, dlugosc);

    int max = abs(min);

    int tablica3[dlugosc];

    for (int i = 0; i < dlugosc; i++)
    {
        tablica3[i] = abs(tablica[i]);
    }

    int tablica2[max + 1] = {0};

    for (int i = 0; i < dlugosc; i++)
    {
        int wartosc = tablica3[i];
        tablica2[wartosc]++;
    }

    int index = 0;

    for (int i = 0; i <= max; i++)
    {
        if (tablica2[i] > 0)
        {
            for (int j = 0; j < tablica2[i]; j++)
            {
                tablica3[index] = -i;
                index++;
            }
        }
    }

    for (int i = 0; i < dlugosc; i++)
    {
        cout << tablica3[i] << " ";
    }
}

int main()
{
    int dlugosc = 4;
    int liczby[dlugosc] = {-4, -8, -5, -1};
    sortowanieKubelkowe(liczby, dlugosc);
    return 0;
}