// Napisz program, który sprawdza czy więcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj liczbe" << endl;

    int liczba;
    int parzyste = 0;
    int nieparzyste = 0;

    cin >> liczba;

    while (liczba > 0)
    {
        int reszta = liczba % 10;

        if (reszta % 2 == 0)
        {
            parzyste++;
        }
        else
        {
            nieparzyste++;
        }

        liczba = liczba / 10;
    }

    if (parzyste > nieparzyste)
    {
        cout << "Parzystych jest wiecej" << endl;
    }
    if (parzyste < nieparzyste)
    {
        cout << "Nieparzystych jest wiecej" << endl;
    }
    if (parzyste == nieparzyste)
    {
        cout << "Parzystych i nieparzystych jest tyle samo" << endl;
    }

    return 0;
}
