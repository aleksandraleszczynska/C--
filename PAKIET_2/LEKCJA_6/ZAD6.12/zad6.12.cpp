// Słowa
// W pliku slowa.txt znajduje się 1000 słów, a w pliku nowe.txt znajduje się 25 słów. W obu plikach wszystkie słowa składają się z małych liter alfabetu łacińskiego. Żadne z tych słów nie ma więcej niż 12 znaków, a każde jest zapisane w osobnym wierszu.
// Napisz program, który da odpowiedzi do poniższych zadań. Każdą odpowiedź zapisz w pliku wynik5.txt i poprzedź ją numerem oznaczającym zadanie.
// a) Dla każdej liczby naturalnej n z przedziału <1, 12> wyznacz liczbę wierszy w pliku slowa.txt, zawierających słowa n-literowe. Wypisz w osobnych wierszach pary: liczba n oraz liczba wierszy z n-literowymi słowami.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    ofstream zapis;
    plik.open("slowa.txt");
    zapis.open("../PLIKI/wynik5.txt", ios::out | ios::app);
    string slowo;
    int tablica[12] = {0};

    zapis << "a) ";

    while (!plik.eof())
    {
        plik >> slowo;
        int dlugosc = slowo.length();
        tablica[dlugosc - 1] = tablica[dlugosc - 1] + 1;
    }

    for (int i = 1; i < 13; i++)
    {
        zapis << "dla liczby n :" << i << " w w pliku znajduje sie " << tablica[i - 1] << " slow n-literowych" << endl;
    }

    zapis.close();

    return 0;
}