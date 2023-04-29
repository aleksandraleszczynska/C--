// Napisy
// W pliku napisy.txt znajduje się 1000 napisów o długościach od 2 do 16 znaków, każdy napis w osobnym wierszu. W każdym napisie mogą wystąpić jedynie dwa znaki: „0” lub „1”.
// W wybranym przez siebie języku programowania napisz program, za pomocą którego uzyskasz odpowiedzi na poniższe polecenia. Odpowiedzi zapisz w pliku zadanie4.txt, a odpowiedź do każdego podpunktu poprzedź literą oznaczającą ten podpunkt.
// c) Podaj, ile jest napisów składających się z samych zer, oraz podaj, ile jest napisów składających się z samych jedynek.

#include <iostream>
#include <fstream>

using namespace std;

bool CzyJednakoweLiczby(string napis)
{
    char liczba = napis[0];
    bool flaga = true;

    for (int i = 1; i < napis.length() - 1; i++)
    {
        if(napis[i] != liczba)
        {
           flaga = false;
        }
    }

    if (flaga = true)
    {
        return true;
    }
}

int main()
{
    fstream plik;
    ofstream zapis;
    string napis;
    int licznik = 0;
    plik.open("napisy.txt");
    zapis.open("../PLIKI/zadanie4.txt", ios::out | ios::app);
    zapis << "c) ";

    while (!plik.eof())
    {
        plik >> napis;

        if (CzyJednakoweLiczby(napis) == true)
        {
            licznik++;
        }
    }

    zapis << licznik << endl;

    zapis.close();

    return 0;
}