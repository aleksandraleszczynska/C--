//Napisz program, który szyfruje tekst za pomocą szyfru Vigenère’a.

#include <iostream>
using namespace std;

string deszyfrowanie(string szyfrogram, string klucz)
{
    string tekstjawny = "";

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

    for (int j = 0; j < szyfrogram.length(); j++)
    {
         if (j > klucz.length() - 1)
            {
                klucz += klucz;
            }

        for (int i = 0; i < 26; i++)
        {
            if (tablica[i][klucz[j] - 65] == szyfrogram[j])
            {
                char szukanalitera = tablica[i][0];
                tekstjawny = tekstjawny + szukanalitera;
            }
        }
    }
    return tekstjawny;
}

int main()
{
    string szyfrogram = "AMKBBDA";
    string klucz = "ABC";
    cout << deszyfrowanie(szyfrogram, klucz);
    return 0;
}