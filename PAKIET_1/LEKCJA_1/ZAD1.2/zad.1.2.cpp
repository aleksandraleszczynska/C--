// Napisz program, który ma pięć zmiennych różnego typu. Pierwsza wczytuję wartość liczby 1. Druga wczytuje liczbę zmiennoprzecinkową 1011001.01001111 Trzecia liczbę całkowitą 1010101. Czwarta wczytuje napis “YOU”. Piąta wartość prawdy.

#include <iostream>

using namespace std;

int main()

{
    int liczba1 = 1;
    float liczba2 = 1011001.01001111;
    double liczba3 = 1010101;
    string slowo = "YOU";
    bool flaga = true;

    cout << liczba1 << endl;
    cout << liczba2 << endl;
    cout << liczba3 << endl;
    cout << slowo << endl;
    cout << flaga << endl;

    return 0;
}
