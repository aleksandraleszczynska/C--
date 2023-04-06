// Napisz program, który sprawdza, czy podane przez użytkownika wyrazy są palindromamami. W zadaniu najpierw zapytaj użytkownika, ile wyrazów chce podać.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj ilosc slow do sprawdzenia" << endl;

    int ilosc;

    cin >> ilosc;

    int a = 0;

    while (a < ilosc)
    {
        cout << "Podaj slowo do sprawdzenia" << endl;

        string slowo;

        cin >> slowo;

        int dlugosc = slowo.length();

        bool flaga = true;

        for (int i = 0; i <= dlugosc / 2; i++)
        {
            if (slowo[i] != slowo[(dlugosc - 1) - i])
            {
                flaga = false;
                break;
            }
        }
        if (flaga == true)
        {
            cout << "Slowo jest palindromem" << endl;
        }
        else
        {
            cout << "Slowo nie jest palindromem" << endl;
        }

        cout << endl;
        a++;
    }

    return 0;
}