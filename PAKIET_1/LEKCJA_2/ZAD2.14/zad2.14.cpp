// Napisz program, który dla wczytanej z klawiatury liczby naturalnej n sprawdza, czy liczba ta jest pierwsza.

#include <iostream>

using namespace std;

int main()

{
    int n;

    bool flaga = true;

    cout << "Podaj liczbe naturalna" << endl;

    cin >> n;

    if (n <= 1)
    {
        flaga = false;

        cout << "liczba nie jest pierwsza" << endl;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "liczba nie jest pierwsza" << endl;

            flaga = false;

            break;
        }
    }

    if (flaga == true)
    {
        cout << "liczba jest pierwsza" << endl;
    }
    return 0;
}
