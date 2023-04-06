// Napisz program, który dla wczytanej z klawiatury liczby naturalnej (zmiennej typu całkowitego) wypisuje ilość cyfr tej liczby.

#include <iostream>

using namespace std;

int main()

{
    int liczba;

    cout << "Podaj liczbe" << endl;

    cin >> liczba;

    int iloscCyfr = 0;

    while (liczba > 0)
    {
        liczba = liczba / 10;
        iloscCyfr++;
    }

    cout << iloscCyfr << endl;

    return 0;
}
