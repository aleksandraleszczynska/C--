// Napisz program, który wypełni macierz 5x5 liczbami parzystymi.

#include <iostream>

using namespace std;

int main()
{
    int tablica[5][5];
    int licznik = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tablica[i][j] = licznik;

            licznik = licznik + 2;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}