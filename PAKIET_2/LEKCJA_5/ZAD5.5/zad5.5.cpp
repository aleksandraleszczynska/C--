// Napisz program, sumujący elementy w każdym wierszu. Sumę każdego z wierszy wypisz po spacji - tablicy dwuwymiarowej.

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
        int suma = 0;

        for (int j = 0; j < columnCount; j++)
        {
            cout << tablica[i][j] << " ";
            suma = suma + tablica[i][j];
        }

        cout << suma << endl;
    }
    return 0;
}
