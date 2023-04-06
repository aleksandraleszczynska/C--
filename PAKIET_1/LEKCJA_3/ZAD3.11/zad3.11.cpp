// Przesuń elementy tablicy cyklicznie w lewo o zadaną liczbę miejsc.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj ilosc przesuniec" << endl;

    int iloscPrzesuniec;

    cin >> iloscPrzesuniec;

    cout << "Podaj ilosc liczb" << endl;

    int iloscLiczb;

    cin >> iloscLiczb;

    int tablica[iloscLiczb];

    for (int i = 0; i < iloscLiczb; i++)
    {
        cout << "Podaj " << i + 1 << " liczbe do tablicy" << endl;

        cin >> tablica[i];
    }

    int l = 0;

    while (l < iloscPrzesuniec)

    {
        int pierwsza = tablica[0];

        for (int i = 0; i < iloscLiczb - 1; i++)
        {
            tablica[i] = tablica[i + 1];
        }

        tablica[iloscLiczb - 1] = pierwsza;

        l++;
    }

    for (int j = 0; j < iloscLiczb; j++)
    {
        cout << tablica[j] << ",";
    }

    return 0;
}