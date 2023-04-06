// Napisz rekurencyjną funkcję power3 obliczającą wartość funkcji:
// x^n = 1 dla n < 1
// x^n = (x^(n/2))^2 dla n parzystego
// x^n = x*(x^(n/2))^2 dla n nieparzystego
// Powyższe założenia funkcji powinny zwracać poprawne wyniki z działania potęgowania. Na potrzeby zadania uznaj, że (n/2) zwraca zawsze wartość całkowitą tzn. (5/2)=2.

#include <iostream>

using namespace std;

int power3(int x, int n)
{
    if (n < 1)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return power3(x, n / 2) * power3(x, n / 2);
    }
    if (n % 2 != 0)
    {
        return x * power3(x, n / 2) * power3(x, n / 2);
    }
}

int main()
{
    cout << power3(2, 3);

    return 0;
}