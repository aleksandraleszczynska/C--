// Zaszyfruj tekst wypisując w szyfrogramie zdanie złożone z kolejnych wyrazów pisanych wspak.

#include <iostream>
using namespace std;

string szyfrowanie(string tekst)
{
    string szyfrogram = "";

    int j = 0;

    while (j < tekst.length() - 1)
    {
        string slowo = "";

        while (j < tekst.length() && tekst[j] != ' ')
        {
            slowo = slowo + tekst[j];
            j++;
        }

        for (int i = 0; i < slowo.length() / 2; i++)
        {
            char temp = slowo[i];
            slowo[i] = slowo[slowo.length() - 1 - i];
            slowo[slowo.length() - 1 - i] = temp;
        }

        slowo = slowo + " ";

        szyfrogram = szyfrogram + slowo;

        while (j < tekst.length() && tekst[j] == ' ')
        {
            j++;
        }
    }
    return szyfrogram;
}
int main()
{
    string zdanie = "ala ma kota";
    cout << szyfrowanie(zdanie);
    return 0;
}