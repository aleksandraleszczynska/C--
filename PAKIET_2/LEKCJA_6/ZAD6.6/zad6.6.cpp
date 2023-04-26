// Cyfry
// W kolejnych wierszach pliku cyfry.txt znajduje się 1000 liczb naturalnych, mniejszych niż 109 (jeden miliard), po jednej liczbie w każdym wierszu.
// Napisz program, który da odpowiedzi do poniższych podpunktów. Każdą odpowiedź zapisz w pliku zadanie4.txt, poprzedzając ją oznaczeniem odpowiedniego podpunktu.
// b) Podaj liczbę z pliku cyfry.txt, której suma cyfr jest największa oraz liczbę z tego pliku, której suma cyfr jest najmniejsza. W obu przypadkach jest tylko jedna taka liczba.

#include <iostream>
#include <fstream>

using namespace std;

int SumaCyfr(int liczba)
{
    int suma = 0;

    while (liczba > 0)
    {
        int cyfra = liczba % 10;
        suma = suma + cyfra;
        liczba = liczba / 10;
    }

    return suma;
}

int main()
{
    fstream plik;
    ofstream zapis;
    int liczba;
    plik.open("cyfry.txt");
    zapis.open("zadanie4b.txt");
    plik >> liczba;
    int zmienna1 = liczba;
    int zmienna2 = liczba;

    while (!plik.eof())
    {
        plik >> liczba;

        if (SumaCyfr(liczba) > SumaCyfr(zmienna1))
        {
            zmienna1 = liczba;
        }
        if (SumaCyfr(liczba) < SumaCyfr(zmienna2))
        {
            zmienna2 = liczba;
        }
    }

    zapis << "Liczba z pliku, której suma cyfr jest największa to " << zmienna1 << " a liczba z tego pliku, której suma cyfr jest najmniejsza to " << zmienna2;

    zapis.close();

    return 0;
}