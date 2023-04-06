// Napisz funkcję, która wyznacza wartość n! (n jest liczbą naturalną). Funkcja ma wykorzystywać iterację.

#include <iostream>

using namespace std;

int Silnia(int n)
{
    int silnia = 1;

    for (int i = 0; i < n; i++)
    {
        silnia = silnia * (n - i);
    }

    return silnia;
}

int main()
{
    cout << Silnia(3);

    return 0;
}