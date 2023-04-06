// Napisz program, który dla wczytanej z klawiatury liczby naturalnej (zmiennej typu całkowitego) wypisuje sumę nieparzystych cyfr tej liczby.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj liczbe naturalna" << endl;

    int liczba;

    int suma = 0;

    cin >> liczba;

    while (liczba > 0)
    {
        int cyfra = liczba % 10;

        if (cyfra % 2 != 0)
        {
            suma = suma + cyfra;
        }

        liczba = liczba / 10;
    }

    cout << suma << endl;

    return 0;
}
