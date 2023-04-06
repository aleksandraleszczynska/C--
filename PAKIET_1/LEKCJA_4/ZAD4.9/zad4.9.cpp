// Napisz funkcję, która wyznacza n-tą (n jest liczbą naturalną) potęgę zadanej liczby rzeczywistej x. Funkcja ma wykorzystywać iteracje. Nie można korzystać z gotowych funkcji z bibliotek.

#include <iostream>

using namespace std;

int PotegaLiczby(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int liczbapoczatkowa = x;

    for (int i = 1; i < n; i++)
    {
        x = x * liczbapoczatkowa;
    }

    return x;
}

int main()
{
    cout << PotegaLiczby(2, 4);

    return 0;
}
