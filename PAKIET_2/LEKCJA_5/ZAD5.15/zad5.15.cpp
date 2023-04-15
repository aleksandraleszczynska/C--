//Napisz program, który wypełni tablicę 5x5 elementami jak poniżej:

// 0    0    0   0  5
// 0    0    0  10  0
// 0    0   20   0  0
// 0   40    0   0  0
// 80   0    0   0  0

#include <iostream>

using namespace std;

int main()
{
    int rowCount = 5;
    int columnCount = 5;
    int tablica[rowCount][columnCount];
    int licznik = 1;

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            if (i + j == 4)
            {
                tablica[i][j] = 5*licznik;
                licznik = licznik*2;
            }
            else
            {
                tablica[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}