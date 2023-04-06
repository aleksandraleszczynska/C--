// Napisz funkcję, która zwróci Twój aktualny wiek. Jako argument funkcji przyjmij rok urodzenia.

#include <iostream>

using namespace std;

int AktualnyWiek(int RokUrodzenia)
{
    return 2023 - RokUrodzenia;
}

int main()
{
    cout << AktualnyWiek(2006) << endl;

    return 0;
}