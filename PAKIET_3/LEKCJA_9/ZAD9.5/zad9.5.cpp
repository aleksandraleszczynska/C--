// Napisz program, który obliczy iteracyjnie Silnie z wpisanej przez użytkownika liczby.

#include <iostream>

using namespace std;

int Silnia(int liczba)
{
    if (liczba == 0)
    {
        return 1;
    }

    int wynik = liczba;

    for (int i = 1; i < liczba; i++)
    {
        wynik = wynik * i;
    }

    return wynik;
}

int main()
{
    cout << Silnia(3);
    return 0;
}