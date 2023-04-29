// Napisy
// W pliku napisy.txt znajduje się 1000 napisów o długościach od 2 do 16 znaków, każdy napis w osobnym wierszu. W każdym napisie mogą wystąpić jedynie dwa znaki: „0” lub „1”.
// W wybranym przez siebie języku programowania napisz program, za pomocą którego uzyskasz odpowiedzi na poniższe polecenia. Odpowiedzi zapisz w pliku zadanie4.txt, a odpowiedź do każdego podpunktu poprzedź literą oznaczającą ten podpunkt.
// a) Podaj, ile jest napisów o parzystej długości.

#include <iostream>
#include <fstream>

using namespace std;

bool CzyParzystaDlugosc(string napis)
{
    if (napis.length() % 2 == 0)
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

    zapis << "NAPISY" << endl;
    zapis << "a) ";

    while (!plik.eof())
    {
        plik >> napis;

        if (CzyParzystaDlugosc(napis) == true)
        {
            licznik++;
        }
    }

    zapis << licznik << endl;

    zapis.close();

    return 0;
}