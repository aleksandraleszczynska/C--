// Słowa
// W pliku slowa.txt znajduje się 1000 słów, a w pliku nowe.txt znajduje się 25 słów. W obu plikach wszystkie słowa składają się z małych liter alfabetu łacińskiego. Żadne z tych słów nie ma więcej niż 12 znaków, a każde jest zapisane w osobnym wierszu.
// Napisz program, który da odpowiedzi do poniższych zadań. Każdą odpowiedź zapisz w pliku wynik5.txt i poprzedź ją numerem oznaczającym zadanie.
// b) Dla każdego słowa z pliku nowe.txt wypisz to słowo oraz dwie liczby rozdzielone spacją oznaczające:
// • liczbę wystąpień danego słowa w pliku slowa.txt,
// • liczbę wystąpień odbicia lustrzanego danego słowa w pliku slowa.txt.

#include <iostream>
#include <fstream>

using namespace std;

bool Czysiepowtarza(string slowo1, string slowo2)
{
    if (slowo1 == slowo2)
    {
        return true;
    }
    return false;
}

// bool Czylustrzaneodbicie(string slowo1, string slowo2)
// {
//    for (int i = 0; i < slowo1.length()-1; i++)
//    {
//     char pierwsza = slowo1[0];
//     slowo1[i] = slowo1[i+1];
//     slowo1[slowo1.length() - 1] = pierwsza;
//    }
// }
int main()
{
    fstream plik1, plik2;
    ofstream zapis;
    plik1.open("slowa.txt");
    plik2.open("nowe.txt");
    zapis.open("../PLIKI/wynik5.txt", ios::out | ios::app);
    string slowo1, slowo2;
    zapis << "b) ";

    while (!plik2.eof())
    {
        plik2 >> slowo2;

        zapis << slowo2;

        int licznik1 = 0;
        int licznik2 = 0;

        while (!plik1.eof())
        {
            plik1 >> slowo1;

            if (Czysiepowtarza(slowo1, slowo2) == true)
            {
                licznik1++;
            }

            // if (Czylustrzaneodbicie(slowo1, slowo2) == true)
            // {
            //     licznik2++;
            // }
        }

        zapis << " : " << licznik1 << " " << licznik2 << endl;
    }

    zapis.close();

    return 0;
}