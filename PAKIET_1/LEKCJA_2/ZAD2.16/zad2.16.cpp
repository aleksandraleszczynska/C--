// Napisz program, który dla wczytanej z klawiatury liczby naturalnej n sprawdza ile cyfr tej liczby jest liczbami pierwszymi.
// Przykład:
// Dla liczby 127, 2 jej cyfry są liczbami pierwszymi (2 i 7).
// Dla liczby 45, 1 cyfra jest liczbą pierwszą (5)
// Dla liczby 8, żadna cyfra nie jest liczbą pierwszą.
// Liczbę należy wczytać jako zmienną całkowitą (int). Nie korzystaj z funkcji wbudowanych!

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj liczbe naturalna" << endl;

    int n;

    bool flaga;

    int licznik = 0;

    cin >> n;

    while (n > 0)

    {
        int reszta = n % 10;

        if (reszta <= 1)
        {
            flaga = false;
        }

        for (int i = 2; i < reszta; i++)
        {
            if (reszta % i == 0)
            {
                flaga = false;
                break;
            }
            else
            {
                flaga = true;
            }
        }

        if (flaga == true)
        {
            licznik++;
        }

        n = n / 10;
    }

    cout << "liczba sklada sie z " << licznik << " cyfr bedacych liczbami pierwszymi " << endl;

    return 0;
}
