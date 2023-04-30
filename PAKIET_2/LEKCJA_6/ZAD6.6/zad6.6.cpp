// Cyfry
// W kolejnych wierszach pliku cyfry.txt znajduje się 1000 liczb naturalnych, mniejszych niż 109 (jeden miliard), po jednej liczbie w każdym wierszu.
// Napisz program, który da odpowiedzi do poniższych podpunktów. Każdą odpowiedź zapisz w pliku zadanie4.txt, poprzedzając ją oznaczeniem odpowiedniego podpunktu.
// b) Podaj liczbę z pliku cyfry.txt, której suma cyfr jest największa oraz liczbę z tego pliku, której suma cyfr jest najmniejsza. W obu przypadkach jest tylko jedna taka liczba.

#include <iostream>
#include <fstream>

using namespace std;

int SumaCyfr(string liczba)
{
    int suma = 0;

    for (int i = 0; i < liczba.length(); i++)
    {
        int cyfra = liczba[i] - 48;
        suma = suma + cyfra;
    }

    return suma;
}

int main()
{
    fstream plik;
    ofstream zapis;
    string liczba;
    plik.open("cyfry.txt");
    zapis.open("../PLIKI/zadanie4.txt", ios::out | ios::app);
    plik >> liczba;
    int najwieksza = 0;
    int najmniejsza = 81;

    while (!plik.eof())
    {
        plik >> liczba;

        int suma = SumaCyfr(liczba);

        if (suma > najwieksza)
        {
            najwieksza = suma;
        }
        if (suma < najmniejsza)
        {
            najmniejsza = suma;
        }
    }

    zapis << "b) ";
    zapis << "Liczba z pliku, której suma cyfr jest największa to " << najwieksza << ", a liczba z tego pliku, której suma cyfr jest najmniejsza to " << najmniejsza << endl;

    zapis.close();

    return 0;
}