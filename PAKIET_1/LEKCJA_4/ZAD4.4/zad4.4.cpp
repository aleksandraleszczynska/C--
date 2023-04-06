// Napisz funkcję, która sprawdza, czy podany w argumencie wyraz jest palindromem.

#include <iostream>

using namespace std;

bool CzyJestPalindromem(string wyraz)
{
    for (int i = 0; i < wyraz.length(); i++)
    {
        if (wyraz[i] != wyraz[wyraz.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << CzyJestPalindromem("kajak");

    return 0;
}