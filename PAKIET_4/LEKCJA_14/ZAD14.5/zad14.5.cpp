// Napisz program, który deszyfruje tekst za pomocą szyfru płotkowego.

#include <iostream>
using namespace std;

string deszyfrowanie(string napis, int klucz)
{
    string tekstjawny = "";
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
        tablica[wiersz][i] = 'X';

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
    int indexliterslowa = 0;

    for (int i = 0; i < klucz; i++)
    {
        for (int j = 0; j < napis.length(); j++)
        {
            if (tablica[i][j] == 'X')
            {
                tablica[i][j] = napis[indexliterslowa];
                indexliterslowa++;
                
            }
            cout << tablica[i][j] << " ";
          
        }
        cout << endl;
    }

    wdol = true;
    wiersz = 0;

    for (int i = 0; i < napis.length(); i++)
    {
            tekstjawny = tekstjawny + tablica[wiersz][i];
        
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

    return tekstjawny;
}

int main()
{
    string szyfrogram = "WAACBRY";
    int klucz = 3;
    cout << deszyfrowanie(szyfrogram, klucz);
    return 0;
}
