// Napisz program, który sprawdza czy podany wyraz jest palindromem np. kajak=kajak

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj slowo do sprawdzenia" << endl;

    string slowo;

    cin >> slowo;

    int dlugosc = slowo.length();

    bool flaga = true;

    for (int i = 0; i <= dlugosc / 2; i++)
    {
        if (slowo[i] != slowo[(dlugosc - 1) - i])
        {
            flaga = false;
            break;
        }
    }
    if (flaga == true)
    {
        cout << "Slowo jest palindromem" << endl;
    }
    else
    {
        cout << "Slowo nie jest palindromem" << endl;
    }

    return 0;
}