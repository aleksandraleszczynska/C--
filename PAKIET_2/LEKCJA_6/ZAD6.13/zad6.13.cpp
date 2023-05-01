// Słowa
// W pliku slowa.txt znajduje się 1000 słów, a w pliku nowe.txt znajduje się 25 słów. W obu plikach wszystkie słowa składają się z małych liter alfabetu łacińskiego. Żadne z tych słów nie ma więcej niż 12 znaków, a każde jest zapisane w osobnym wierszu.
// Napisz program, który da odpowiedzi do poniższych zadań. Każdą odpowiedź zapisz w pliku wynik5.txt i poprzedź ją numerem oznaczającym zadanie.
// b) Dla każdego słowa z pliku nowe.txt wypisz to słowo oraz dwie liczby rozdzielone spacją oznaczające:
// • liczbę wystąpień danego słowa w pliku slowa.txt,
// • liczbę wystąpień odbicia lustrzanego danego słowa w pliku slowa.txt.

#include <iostream>
#include <fstream>

using namespace std;

 string lustrzaneodbicie(string slowo2)
 {
    string odwroconeslowo2;

    for (int i = slowo2.length() - 1; i >= 0; i--)
    {
     odwroconeslowo2 += slowo2[i];
    }

    return odwroconeslowo2;
 }
int main()
{
    fstream plik1, plik2;
    ofstream zapis;
    plik1.open("slowa.txt");
    plik2.open("nowe.txt");
    zapis.open("../PLIKI/wynik5.txt", ios::out | ios::app);
    string slowo1, slowo2;
    zapis << "b) ";

    string tablica[25];
    int tablica2[25] = {0};
    string tablica3[25];
    int tablica4[25] = {0};

    for (int i = 0; i < 25; i++)
    {
        plik2 >> slowo2;
        tablica[i] = slowo2;
        tablica3[i] = lustrzaneodbicie(slowo2);
    }


    while (!plik1.eof())
    {
        plik1 >> slowo1;

        for (int i = 0; i < 25; i++)
        {
            if (slowo1 == tablica[i])
            {
                tablica2[i] = tablica2[i] + 1;
            }
            if (slowo1 == tablica3[i])
            {
                tablica4[i] = tablica4[i] + 1;
            }

        }
    }

        for (int i = 0; i < 25; i++)
        {
            zapis << tablica[i] << " " << tablica2[i] << " " << tablica4[i] << endl;
        }

        zapis.close();

        return 0;
    }