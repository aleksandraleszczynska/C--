// Napisz funkcję, która jako argument przyjmuje liczbę i zwraca True, jeśli liczba ta jestpodzielna przez 3 oraz przez 5.

#include <iostream>

using namespace std;

bool CzyJestPodzielnaPrzez3i5(int liczba)
{
    return liczba % 3 == 0 && liczba % 5 == 0;
}

int main()
{
    cout << CzyJestPodzielnaPrzez3i5(16) << endl;

    return 0;
}