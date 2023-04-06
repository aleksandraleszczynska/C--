// Stwórz pętle for używając liczb z przedziału od 1 do 1000 włącznie. Wypisz liczby, które są podzielne zarówno przez 3 jak i przez 5, a następnie ich sumę.

#include <iostream>

using namespace std;

int main()

{
    int suma = 0;

    for (int i = 1; i <= 1000; i++)

    {
        if (i % 3 == 0 && i % 5 == 0)

        {
            cout << i << endl;
            suma = suma + i;
        }
    }

    cout << suma << endl;

    return 0;
}
