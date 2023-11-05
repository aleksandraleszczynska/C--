// Napisz algorytm iteracyjny, który wyznacza schemat przekładania dysków(krążków) między wieżami A->C (Wieże Hanoi).

#include <iostream>
#include <cmath>
using namespace std;

string Hanoi(int n, char a, char b, char c)
{
    string odpowiedz = "";

    char pierwszy = a;
    char drugi = b;
    char trzeci = c;

    int granica = pow(2, n) - 1;
    int licznik = 0;

    while (licznik < granica)
    {
        if (licznik == (granica / 2))
        {
            odpowiedz = odpowiedz + a + c;
            licznik++;
        }
        else if (n % 2 == 0 && licznik != (granica / 2))
        {
            odpowiedz = odpowiedz + pierwszy + drugi + pierwszy + trzeci + drugi + trzeci;
            licznik = licznik + 3;
        }
        else if (n % 2 != 0 && licznik != (granica / 2))
        {
            odpowiedz = odpowiedz + pierwszy + trzeci + pierwszy + drugi + trzeci + drugi;
            licznik = licznik + 3;
        }

        if (n % 2 == 0)
        {
            pierwszy = a;
            drugi = c;
            trzeci = b;
        }
        else
        {
            pierwszy = b;
            drugi = a;
            trzeci = c;
        }
    }
    return odpowiedz;
}

int main()
{
    int n = 2;
    cout << Hanoi(n, 'A', 'B', 'C');
    return 0;
}
