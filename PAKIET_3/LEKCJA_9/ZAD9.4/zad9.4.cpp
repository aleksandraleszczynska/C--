//Napisz program, który obliczy rekurencyjnie NWW z wpisanych przez użytkownika liczb.

#include <iostream>

using namespace std;

int NWD(int liczba1, int liczba2)
{
    if (liczba1 == liczba2)
    {
        return liczba1;
    }

    if (liczba1 > liczba2)
    {
        liczba1 = liczba1 - liczba2;
    }

    if (liczba2 > liczba1)
    {
        liczba2 = liczba2 - liczba1;
    }

    return NWD(liczba1, liczba2);

}

int NWW(int liczba1, int liczba2)
{
    return (liczba1*liczba2)/NWD(liczba1, liczba2);
}

int main()
{
    cout << NWW(15,20);
    return 0;
}