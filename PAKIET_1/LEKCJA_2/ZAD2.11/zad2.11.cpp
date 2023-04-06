// Napisz program, który dla wczytanej z klawiatury liczby naturalnej wypisuje jej rozkład na czynniki pierwsze. Zorganizuj wyświetlanie tak, by program jako wynik działania wypisywał linijkę postaci np. 120=22235 35=5*7

#include <iostream>

using namespace std;

int main()

{
    int liczba;

    cout << "Podaj liczbe naturalna" << endl;

    cin >> liczba;

    int dzielnik = 2;

    cout << liczba << '=';

    while (dzielnik <= liczba)
    {
        if (liczba % dzielnik == 0)
        {
            liczba = liczba / dzielnik;
            cout << dzielnik << '*';
        }
        else
        {
            dzielnik++;
        }
    }

    return 0;
}
