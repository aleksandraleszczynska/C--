// Napisz rekurencyjną funkcję power2 obliczającą wartość za pomocą następującej rekurencji:
// x^n = 1 dla n=0
// x^n = x*x^(n-1) dla n>0

#include <iostream>

using namespace std;

int power2(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return x * power2(x, n - 1);
}

int main()
{
    cout << power2(3, 2);

    return 0;
}
