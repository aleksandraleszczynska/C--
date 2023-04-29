// Napisy
// W pliku napisy.txt znajduje się 1000 napisów o długościach od 2 do 16 znaków, każdy napis w osobnym wierszu. W każdym napisie mogą wystąpić jedynie dwa znaki: „0” lub „1”.
// W wybranym przez siebie języku programowania napisz program, za pomocą którego uzyskasz odpowiedzi na poniższe polecenia. Odpowiedzi zapisz w pliku zadanie4.txt, a odpowiedź do każdego podpunktu poprzedź literą oznaczającą ten podpunkt.
// b) Podaj, ile jest napisów, które zawierają taką samą liczbę zer i jedynek.

#include <iostream>
#include <fstream>

using namespace std;

bool CzyTyleSamo0i1(string napis)
{
    int zera = 0;
    int jedynki = 0;

    for (int i = 0; i < napis.length(); i++)
    {
        if(napis[i] = '0')
        {
            zera++;
        }
        if(napis[i] = '1')
        {
            jedynki++;
        }
    }
    if (zera == jedynki)
    {
        return true;
    }
    return false;
}

int main()
{
    fstream plik;
    ofstream zapis;
    string napis;
    int licznik = 0;
    plik.open("napisy.txt");
    zapis.open("../PLIKI/zadanie4.txt", ios::out | ios::app);
    zapis << "b) ";

    while (!plik.eof())
    {
        plik >> napis;

        if (CzyTyleSamo0i1(napis) == true)
        {
            licznik++;
        }
    }

    zapis << licznik << endl;

    zapis.close();

    return 0;
}