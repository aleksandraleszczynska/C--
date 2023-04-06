// Napisz program, który wczytuje dwie wartości liczbowe do zmiennych a i b. Następnie sprawdza wartość wyrażenia (a % b) == 0. Jeżeli, jest to prawda, niech wypisze się na ekran napis np. “Liczba 15 jest podzielna przez 5”, jeżeli fałsz “Liczba 15 nie jest podzielna przez 4”.

#include <iostream>

using namespace std;

int main()

{
    int a, b;

    cin >> a;
    cin >> b;

    if (a % b == 0)
    {
        cout << "Liczba " << a << " jest podzielna przez " << b << endl;
    }
    else
    {
        cout << "Liczba " << a << " nie jest podzielna przez " << b << endl;
    }

    return 0;
}
