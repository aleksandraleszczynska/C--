// Napisz program, który sprawdzi czy podany wyraz jest anagramem, użyj innego sposobu niż w odpowiedzi do poprzedniego zadania.

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
    char tablica1[26];
    char tablica2[26];

    for (int i = 0; i < 26; i++)
    {
        tablica1[i] = IleZnakow(slowo1, i + 65);
        tablica2[i] = IleZnakow(slowo2, i + 65);
    }

    for (int i = 0; i < 26; i++)
    {
        if (tablica1[i] != tablica2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << CzyJestAnagramem("DBUTR", "RTUBD");
    return 0;
}