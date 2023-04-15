//Napisz program, który wypełni macierz 5x5 elementami jak poniżej (użyj pętli):
// 1  0  0  0  0
// 0  4  0  0  0
// 0  0  9  0  0
// 0  0  0  16 0
// 0  0  0  0  25

#include <iostream>

using namespace std;

int main()
{
    int rowCount = 5;
    int columnCount = 5;
    int tablica[rowCount][columnCount];
    int licznik = 4;

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            if (i == j)
            {
                tablica[i][j] = (rowCount - licznik) *(rowCount - licznik);
                licznik--;
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