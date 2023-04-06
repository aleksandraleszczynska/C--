// Spróbuj jeszcze raz podejść do programu, który sprawdza czy podany pesel jest prawidłowy. Tym razem zamiast deklaracji w oddzielnych zmiennych, zrób to za pomocą łańcucha znaków.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj pesel do sprawdzenia" << endl;

    string pesel;

    cin >> pesel;

    int tablica[11];

    for (int i = 0; i < 11; i++)
    {
        tablica[i] = pesel[i] - 48;
    }

    int suma = tablica[0] * 1 + tablica[1] * 3 + tablica[2] * 7 + tablica[3] * 9 + tablica[4] * 1 + tablica[5] * 3 + tablica[6] * 7 + tablica[7] * 9 + tablica[8] * 1 + tablica[9] * 3 + tablica[10] * 1;

    if (suma % 10 == 0)
    {
        cout << "Pesel jest poprawny" << endl;
    }
    else
    {
        cout << "Pesel jest niepoprawny" << endl;
    }

    return 0;
}
