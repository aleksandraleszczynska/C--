// Napisz program, sumujący elementy w każdej kolumnie. Sumy każdej z kolumn wypisz po spacji - tablicy dwuwymiarowej.

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

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < columnCount; j++)
    {
        int suma = 0;

        for (int i = 0; i < rowCount; i++)
        {
            suma = suma + tablica[i][j];
        }

        cout << suma << " ";
    }
    return 0;
}
