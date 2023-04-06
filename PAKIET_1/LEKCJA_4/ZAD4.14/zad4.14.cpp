// Zapisz iteracyjną funkcje power1 obliczającą wartość x^n dla x>=0.

#include <iostream>

using namespace std;

int power1(int x, int n)
{

    int wynik = 1;

    for (int i = 0; i < n; i++)
    {
        wynik = wynik * x;
    }
    return wynik;
}

int main()
{
    cout << power1(2, 5);

    return 0;
}