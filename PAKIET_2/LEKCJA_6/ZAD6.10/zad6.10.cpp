// Napisy
// W pliku napisy.txt znajduje się 1000 napisów o długościach od 2 do 16 znaków, każdy napis w osobnym wierszu. W każdym napisie mogą wystąpić jedynie dwa znaki: „0” lub „1”.
// W wybranym przez siebie języku programowania napisz program, za pomocą którego uzyskasz odpowiedzi na poniższe polecenia. Odpowiedzi zapisz w pliku zadanie4.txt, a odpowiedź do każdego podpunktu poprzedź literą oznaczającą ten podpunkt.
// c) Podaj, ile jest napisów składających się z samych zer, oraz podaj, ile jest napisów składających się z samych jedynek.

#include <iostream>
#include <fstream>

using namespace std;

bool CzyJednakoweLiczby(string napis)
{
    char cyfra = napis[0];
    bool flaga = true;

    for (int i = 1; i < napis.length() - 2; i++)
    {
        if (napis[i] != cyfra)
        {
            flaga = false;
        }
    }

    if (flaga == true)
    {
        return true;
    }
}

int main()
{
    fstream plik;
    ofstream zapis;
    string napis;
    int licznik0 = 0;
    int licznik1 = 0;
    plik.open("napisy.txt");
    zapis.open("../PLIKI/zadanie4.txt", ios::out | ios::app);
    zapis << "c) ";

    while (!plik.eof())
    {
        plik >> napis;

        if (CzyJednakoweLiczby(napis) == true && napis[0] == '0')
        {
            licznik0++;
        }
        if (CzyJednakoweLiczby(napis) == true && napis[0] == '1')
        {
            licznik1++;
        }
    }

    zapis << "Ilosc liczb z zerami: " << licznik0 << endl;
    zapis << "Ilosc liczb z jedynkami: " << licznik1 << endl;

    zapis.close();

    return 0;
}