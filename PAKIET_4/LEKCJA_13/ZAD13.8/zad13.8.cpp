//Napisz program, który deszyfruje tekst za pomocą szyfru cezara. Uwzględnij możliwość podania ujemnego klucza.

#include <iostream>
using namespace std;

string deszyfrowanie(string napis, int klucz)
{
    string szyfrogram = "";
    klucz = klucz % 26;

    for (int i = 0; i < napis.length(); i++)
    {
        if (napis[i] - klucz < 'A')
        {
            szyfrogram = szyfrogram + char(napis[i] - klucz + 26);
        }
        else if (napis[i] - klucz > 'Z')
        {
            szyfrogram = szyfrogram + char(napis[i] - klucz - 26);
        }
        else if (napis[i] - klucz > 'A' && napis[i] - klucz < 'Z')
        {
            szyfrogram = szyfrogram + char(napis[i] - klucz);
        }
    }
    return szyfrogram;
}

int main()
{
    string napis = "ZZZZAAAA";
    int klucz = 1;
    cout << deszyfrowanie(napis, klucz);
    return 0;
}