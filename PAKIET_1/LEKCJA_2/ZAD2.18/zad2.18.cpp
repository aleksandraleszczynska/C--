#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe" << endl;

    int liczba;

    int odwrotna = 0;

    cin >> liczba;

    while(liczba != 0)
    {
        odwrotna = odwrotna * 10 + liczba % 10;

        liczba = liczba/10;
    }

    cout << odwrotna << endl;

    return 0;
}
