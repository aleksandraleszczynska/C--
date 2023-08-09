// Napisz program, który szyfruje tekst za pomocą szyfru Vigenère’a.

#include <iostream>
using namespace std;

string szyfrowanie(string tekstjawny, string klucz)
{
    string szyfrogram = "";

    char tablica[26][26];

    for (int i = 0; i < 26; i++)
    {
        char litera = 'A' + i;

        for (int j = 0; j < 26; j++)
        {
            if (litera > 'Z')
            {
                litera = 'A';
            }
            tablica[i][j] = litera;
            litera++;
        }
    }

    for (int i = 0; i < tekstjawny.length(); i++)
    {
        if (i > klucz.length() - 1)
        {
            klucz += klucz;
        }
        char literazwiersza = tekstjawny[i];
        char literazklucza = klucz[i];

        int szukanywiersz = literazwiersza - 65;
        int szukanakolumna = literazklucza - 65;

        char szukanalitera = tablica[szukanywiersz][szukanakolumna];
        szyfrogram = szyfrogram + szukanalitera;
    }

    return szyfrogram;
}

int main()
{
    string tekstjawny = "ALIBABA";
    string klucz = "ABC";
    cout << szyfrowanie(tekstjawny, klucz);
    return 0;
}