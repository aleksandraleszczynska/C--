// Napisz algorytm rekurencyjny, który wyznacza schemat przekładania dysków(krążków) między wieżami A->C (Wieże Hanoi).

#include <iostream>
using namespace std;

string Hanoi(int n, char a, char b, char c)
{
    if (n == 0)
    {
        return "";
    }
    string lewa = Hanoi(n - 1, a, c, b);
    string prawa = Hanoi(n - 1, b, a, c);
    return lewa + a + c + prawa;
}

int main()
{
    int n = 2;
    cout << Hanoi(n, 'A', 'B', 'C');
    return 0;
}