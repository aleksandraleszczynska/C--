// Napisz funkcję, która sprawdza, ile liter “a” jest w wyrazie podanym w argumencie. Program ma policzyć zarówno małe i wielkie litery.

#include <iostream>

using namespace std;

int IleLiterA(string wyraz)
{
    int licznik = 0;

    for (int i = 0; i < wyraz.length(); i++)
    {
        if (wyraz[i] == 'A' || wyraz[i] == 'a')
        {
            licznik++;
        }
    }

    return licznik;
}

int main()
{
    cout << IleLiterA("Atakama");

    return 0;
}