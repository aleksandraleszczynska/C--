//Napisz program, obracający tablicę dwuwymiarowa o 270 stopni w prawo.

#include <iostream>

using namespace std;

int main()
{
    int rowCount = 3;
    int columnCount = 3;
    int tablica[rowCount][columnCount];
    int tablica2[rowCount][columnCount];

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

    cout << endl;

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            tablica2[rowCount - 1 - j][i] = tablica[i][j];
        }
    }

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << tablica2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}