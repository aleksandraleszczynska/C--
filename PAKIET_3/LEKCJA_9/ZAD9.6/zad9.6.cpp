// Napisz program, który obliczy rekurencyjnie Silnie z wpisanej przez użytkownika liczby.

#include <iostream>

using namespace std;

int Silnia(int liczba)
{
    if (liczba == 0)
    {
        return 1;
    }
    if (liczba == 1)
    {
        return 1;
    }
    return liczba * Silnia(liczba - 1);
}

int main()
{
    cout << Silnia(5);
    return 0;
}