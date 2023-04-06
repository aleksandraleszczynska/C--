// Napisz program, który drukuje na ekranie zadaną liczbę (zmienną typu całkowitego) zastępując jej kolejne cyfry ich kwadratami (dla liczby 127 drukujemy 49 4 1)

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj liczbe" << endl;

    int liczba;

    cin >> liczba;

    while (liczba > 0)
    {
        int reszta = liczba % 10;

        liczba = liczba / 10;

        int iloczyn = reszta * reszta;

        cout << iloczyn << " ";
    }

    return 0;
}
