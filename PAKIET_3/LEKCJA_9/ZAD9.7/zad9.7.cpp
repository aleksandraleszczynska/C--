// Napisz program, który sprawdzi czy podany wyraz jest anagramem.

#include <iostream>

using namespace std;

int IleZnakow(string slowo, char znak)
{
    int licznik = 0;

    for (int i = 0; i < slowo.length(); i++)
    {
        if (slowo[i] == znak)
        {
            licznik++;
        }
    }
    return licznik;
}

bool CzyJestAnagramem(string slowo1, string slowo2)
{
    if (slowo1.length() != slowo2.length())
    {
        return false;
    }

    for (char znak = 'A'; znak <= 'Z'; znak++)
    {
        if (IleZnakow(slowo1, znak) != IleZnakow(slowo2, znak))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << CzyJestAnagramem("ALA", "AAL");
    return 0;
}