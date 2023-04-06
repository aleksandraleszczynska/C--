// Napisz program, który dla wczytanych liczb wypisze, które są liczbami pierwszymi. Program na początku musi zapytać o ilość liczb, które chce podać do sprawdzenia użytkownik.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj dlugosc tablicy" << endl;
    int k;
    cin >> k;

    int tablica[k];

    for (int i = 0; i < k; i++)
    {
        cout << "Podaj liczbe do tablicy" << endl;
        cin >> tablica[i];
    }

    int i = 0;

    while (i <= k)

    {
        bool flaga = true;

        if (tablica[i] <= 1)
        {
            flaga = false;
        }

        for (int j = 2; j < tablica[i]; j++)
        {
            if (tablica[i] % j == 0)
            {
                flaga = false;
                break;
            }
        }
        if (flaga == true)
        {
            cout << "Liczba pierwsza jest: " << tablica[i] << endl;
        }

        i++;
    }

    return 0;
}
