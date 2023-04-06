// Napisz funkcję, która wyznacza wartość n! (n jest liczbą naturalną). Funkcja ma wykorzystywać rekurencję.

#include <iostream>

using namespace std;

int Silnia(int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n > 1)
    {
        return n * Silnia(n - 1);
    }
}

int main()
{
    cout << Silnia(5);

    return 0;
}