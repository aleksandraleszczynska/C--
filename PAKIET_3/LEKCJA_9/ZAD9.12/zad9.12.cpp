// Napisz funkcję sprawdzającą, czy podana liczba jest doskonała.

#include <iostream>

using namespace std;

bool CzyLiczbaJestDoskonala(int liczba)
{
    int suma = 0;

    for (int i = 1; i < liczba; i++)
    {
        if (liczba % i == 0)
        {
            suma++;
        }
    }
    return suma == liczba;
}

int main()
{
    cout << CzyLiczbaJestDoskonala(6);
    return 0;
}
