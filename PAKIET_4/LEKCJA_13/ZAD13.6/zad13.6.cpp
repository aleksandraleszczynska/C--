// Napisz program, który szyfruje tekst za pomocą szyfru płotkowego.

#include <iostream>
using namespace std;

string szyfrowanie(string napis, int klucz)
{
    string szyfrogram = "";
    char tablica[klucz][napis.length()];
    bool wdol = true;
    int wiersz = 0;

    for (int i = 0; i < klucz; i++)
    {
        for (int j = 0; j < napis.length(); j++)
        {
            tablica[i][j] = ' ';
        }
    }

    for (int i = 0; i < napis.length(); i++)
    {
        tablica[wiersz][i] = napis[i];

        if (wdol == true && wiersz != klucz - 1)
        {
            wiersz++;
        }
        else if (wdol == true && wiersz == klucz - 1)
        {
            wdol = false;
            wiersz--;
        }
        else if (wdol == false && wiersz != 0)
        {
            wiersz--;
        }
        else if (wdol == false && wiersz == 0)
        {
            wdol = true;
            wiersz++;
        }
    }

    for (int i = 0; i < klucz; i++)
    {
        for (int j = 0; j < napis.length(); j++)
        {
            cout << tablica[i][j] << " ";
            if (tablica[i][j] != ' ')
            {
                szyfrogram = szyfrogram + tablica[i][j];
            }
        }
        cout << endl;
    }

    return szyfrogram;
}

int main()
{
    string napis = "WARCABY";
    int klucz = 3;
    cout << szyfrowanie(napis, klucz);
    return 0;
}
