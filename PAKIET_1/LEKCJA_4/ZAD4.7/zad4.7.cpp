// Napisz funkcję, która jako argument przyjmuje liczbę całkowitą i zwraca ilość cyfr tej liczby.

#include <iostream>

using namespace std;

int IloscCyfr(int liczba)
{
    int licznik = 0;

    while (liczba > 0)
    {
        liczba = liczba / 10;
        licznik++;
    }

    return licznik;
}

int main()
{
    cout << IloscCyfr(123456789);

    return 0;
}