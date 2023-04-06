// Napisz program, który wczytuje z klawiatury liczbę całkowitą i wyświetla ją w odwrotnej kolejności. (Nie używaj stringa w tym zadaniu.)

#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe" << endl;

    int liczba;

    cin >> liczba;

    while (liczba > 0)
    {
        int reszta = liczba % 10;

        cout << reszta;

        liczba = liczba / 10;
    }

    return 0;
}
