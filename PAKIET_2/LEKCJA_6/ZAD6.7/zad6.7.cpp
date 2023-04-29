// Cyfry
// W kolejnych wierszach pliku cyfry.txt znajduje się 1000 liczb naturalnych, mniejszych niż 109 (jeden miliard), po jednej liczbie w każdym wierszu.
// Napisz program, który da odpowiedzi do poniższych podpunktów. Każdą odpowiedź zapisz w pliku zadanie4.txt, poprzedzając ją oznaczeniem odpowiedniego podpunktu.
// c) Wypisz wszystkie liczby z pliku cyfry.txt, których cyfry tworzą ciąg rosnący.

#include <iostream>
#include <fstream>

using namespace std;

bool CzyRosnacy(string liczba)
{
    for (int i = 0; i < liczba.length() - 1; i++)
    {
        if ((int)liczba[i] > (int)liczba[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    fstream plik;
    ofstream zapis;
    string liczba;
    plik.open("cyfry.txt");
    zapis.open("../PLIKI/zadanie4.txt", ios::out | ios::app);

    zapis << "c) " << endl;

    while (!plik.eof())
    {
        plik >> liczba;

        if (CzyRosnacy(liczba) == true)
        {
            zapis << liczba << endl;
        }
    }

    zapis.close();

    return 0;
}