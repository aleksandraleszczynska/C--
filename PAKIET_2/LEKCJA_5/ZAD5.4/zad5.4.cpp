// Napisz program, znajdujący minimalny i maksymalny element - tablicy dwuwymiarowej.

#include <iostream>

using namespace std;

int main()
{
    int rowCount = 2;
    int columnCount = 2;
    int tablica[rowCount][columnCount];

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << "Podaj liczbe do tablicy" << endl;
            cin >> tablica[i][j];
        }
    }

    int min = tablica[0][0];
    int max = tablica[0][0];

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 1; j < columnCount; j++)
        {
            if (tablica[i][j] < min)
            {
                min = tablica[i][j];
            }
            if (tablica[i][j] > max)
            {
                max = tablica[i][j];
            }
        }
    }

    cout << "Minimalny element to " << min << " a maksymalny to " << max;

    return 0;
}