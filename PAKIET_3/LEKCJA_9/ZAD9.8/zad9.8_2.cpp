// Napisz program, który sprawdzi czy podany wyraz jest anagramem, użyj innego sposobu niż w odpowiedzi do poprzedniego zadania.

#include <iostream>

using namespace std;

string Sortowanie(string slowo)
{
    for (int j = 0; j < slowo.length() - 1; j++)
    {
        for (int i = 0; i < slowo.length() - 1; i++)
        {
            if (slowo[i] < slowo[i + 1])
            {
                int temp = slowo[i];
                slowo[i] = slowo[i + 1];
                slowo[i + 1] = temp;
            }
        }
    }

    return slowo;
}

bool CzyJestAnagramem(string slowo1, string slowo2)
{
    string nowe1 = Sortowanie(slowo1);
    string nowe2 = Sortowanie(slowo2);
    
    for (int i = 0; i < slowo1.length()-1; i++)
    {
        if (nowe1[i] != nowe2[i])
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