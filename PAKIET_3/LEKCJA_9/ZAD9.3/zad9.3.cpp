//Napisz program, który obliczy iteracyjnie NWW z wpisanych przez użytkownika liczb.

#include <iostream>

using namespace std;

int NWD(int liczba1, int liczba2)
{
    while (liczba1 != liczba2)
    {
         if(liczba1 > liczba2)
        {
            liczba1 = liczba1 - liczba2;
        }
        else
        {
            liczba2 = liczba2 - liczba1;
        }
    }

    return liczba1;

    }

    int NWW(int liczba1, int liczba2)
    {
        return (liczba1*liczba2)/NWD(liczba1, liczba2);
    }

int main()
{
    cout << NWW(3,4);
    return 0;
}