// Cyfry
// W kolejnych wierszach pliku cyfry.txt znajduje się 1000 liczb naturalnych, mniejszych niż 109, po jednej liczbie w każdym wierszu.
// Napisz program, który da odpowiedzi do poniższych podpunktów. Każdą odpowiedź zapisz w pliku zadanie4.txt, poprzedzając ją oznaczeniem odpowiedniego podpunktu.
// a) Ile liczb parzystych jest w pliku cyfry.txt?

#include <iostream>
#include <fstream>

using namespace std;

bool CzyParzysta(string liczba)
{
    char ostatniznak = liczba[liczba.length() - 1];
    if (ostatniznak == '0' || ostatniznak == '2' || ostatniznak == '4' || ostatniznak == '6' || ostatniznak == '8')
    {
        return true;
    }
    return false;
}

int main()
{
    fstream plik;
    ofstream zapis;
    string liczba;
    int licznik = 0;
    plik.open("cyfry.txt");
    zapis.open("../PLIKI/zadanie4.txt", ios::out | ios::app);

    zapis << "CYFRY" << endl;

    while (!plik.eof())
    {
        plik >> liczba;

        if (CzyParzysta(liczba) == true)
        {
            licznik++;
        }
    }

    zapis << "a) " << licznik << endl;

    zapis.close();

    return 0;
}