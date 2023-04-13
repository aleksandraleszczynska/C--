// Napisz program, wypisujący wszystkie liczby pierwsze z tablicy dwuwymiarowej.

#include <iostream>

using namespace std;

bool CzyLiczbaJestPierwsza(int liczba)
{
    bool flaga = true;

    if(liczba <= 1)
    {
        flaga = false;
    }

    for (int l = 2; l < liczba; l++)
    {
        if (liczba % l == 0)
        {
            flaga = false;
            break;
        }
    }

    return flaga;
}

int main()
{
    int rowCount = 3;
    int columnCount = 3;
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

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            if (CzyLiczbaJestPierwsza(tablica[i][j]) == true)
            {
                cout << tablica[i][j] << " ";
            }
        }
    }

    return 0;
}