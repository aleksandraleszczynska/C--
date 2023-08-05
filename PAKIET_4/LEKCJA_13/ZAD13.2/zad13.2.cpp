// Napisz program, który szyfruje tekst za pomocą szyfru cezara.

#include <iostream>
using namespace std;

string szyfrowanie(string napis, int klucz)
{
    string szyfrogram = "";
    klucz = klucz % 26;

    for (int i = 0; i < napis.length(); i++)
    {
        if (napis[i] + klucz > 'Z')
        {
            szyfrogram = szyfrogram + char(napis[i] + klucz - 26);
        }
        else
        {
            szyfrogram = szyfrogram + char(napis[i] + klucz);
        }
    }
    return szyfrogram;
}

int main()
{
    string napis = "ZZAA";
    int klucz = 31;
    cout << szyfrowanie(napis, klucz);
    return 0;
}