// Napisz program, który pobiera od użytkownika liczbę i wyświetla jej dzielniki. Przykładowo, dla liczby 21 dzielniki to: 1, 3, 7, 21.

#include <iostream>

using namespace std;

int main()

{
    int liczba;

    cout << "Podaj liczbe" << endl;

    cin >> liczba;

    for (int i = 1; i <= liczba; i++)

    {
        if (liczba % i == 0)
        {
            cout << "Dzielnikiem jest liczba " << i << endl;
        }
    }

    return 0;
}
