// Zrealizuj program deszyfrujący algorytmu z zadania 15.4.

#include <iostream>
using namespace std;

string deszyfrowanie(string szyfr, int klucz)
{
    int kolumny = klucz / 10;
    int wiersze = szyfr.length() / kolumny;
    int przesuniecie = klucz % 10;
    char macierz[wiersze][kolumny];
    string tekstjawny = "";

    int licznik = 0;

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            macierz[j][i] = szyfr[licznik];
            licznik++;
        }
    }

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }

    char macierz2[wiersze][kolumny];
    cout << endl;

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            if (j + przesuniecie > kolumny - 1)
            {
                macierz2[i][j] = macierz[i][j + przesuniecie - kolumny];
            }
            else
            {
                macierz2[i][j] = macierz[i][j + przesuniecie];
            }
        }
    }

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            cout << macierz2[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            tekstjawny = tekstjawny + macierz2[i][j];
        }
    }
    return tekstjawny;
}

int main()
{
    string szyfr = "LATAKAAMO";
    int klucz = 32;
    cout << deszyfrowanie(szyfr, klucz);
    return 0;
}