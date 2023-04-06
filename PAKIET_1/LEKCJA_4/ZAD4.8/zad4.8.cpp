// Napisz funkcję, która jako argument przyjmuje liczbę. Funkcja ma sprawdzić, czy podana liczba jest pierwsza.

#include <iostream>

using namespace std;

bool CzyLiczbaJestPierwsza(int liczba)
{
    if (liczba <= 1)
    {
        return false;
    }

    for (int i = 2; i < liczba; i++)
    {
        if (liczba % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << CzyLiczbaJestPierwsza(13);

    return 0;
}