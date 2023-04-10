// Napisz program, obliczający iloczyn elementów podzielnych przez 7 - tablicy dwuwymiarowej.

#include <iostream>

using namespace std;

bool CzyPodzielnaPrez7(int liczba)
{
    if (liczba % 7 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int iloczyn = 1;
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
            if (CzyPodzielnaPrez7(tablica[i][j]) == true)
            {
                iloczyn = iloczyn * tablica[i][j];
            }
        }
    }

    cout << "Iloczyn elementow podzielnych przez 7 wynosi " << iloczyn;

    return 0;
}