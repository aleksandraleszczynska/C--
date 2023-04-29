// Napisy
// W pliku napisy.txt znajduje się 1000 napisów o długościach od 2 do 16 znaków, każdy napis w osobnym wierszu. W każdym napisie mogą wystąpić jedynie dwa znaki: „0” lub „1”.
// W wybranym przez siebie języku programowania napisz program, za pomocą którego uzyskasz odpowiedzi na poniższe polecenia. Odpowiedzi zapisz w pliku zadanie4.txt, a odpowiedź do każdego podpunktu poprzedź literą oznaczającą ten podpunkt.
// d) Dla każdej liczby k = 2, 3, …,16 podaj liczbę napisów o długości k znajdujących się w pliku napisy.txt, tzn. podaj, ile jest napisów 2-znakowych, ile jest napisów 3-znakowych itd.

#include <iostream>
#include <fstream>

using namespace std;

int IloscZnakow(string napis, int k)
{
    int licznik = 0;
    fstream plik;

    while (!plik.eof())
    {
        plik >> napis;

        if (napis.length() == k)
        {
            licznik++;
        }
        return licznik;
    }
}

int main()
{
    fstream plik;
    ofstream zapis;
    string linia;
    plik.open("napisy.txt");
    zapis.open("../PLIKI/zadanie4.txt", ios::out | ios::app);

    zapis << "d) ";

    int k = 2;

    while (!plik.eof())
    {
        plik >> linia;

        zapis << "Dla k = " << k << " w pliku znajduje sie " << IloscZnakow(linia, k) << " napisow o dlugosci k" << endl;

        k++;
    }

    return 0;
}