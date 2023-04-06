// Napisać program, w którym parametrem jest liczba całkowita dodatnia, program wyświetla na ekranie wszystkie potęgi liczby 2 niewiększe, niż podana liczba. Przykładowo, dla liczby 20 program powinien wyświetlić: 2, 4, 8 i 16.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj liczbe calkowita dodatnia" << endl;

    int liczba;
    int podstawa = 2;

    cin >> liczba;

    for (int potega = 1; podstawa * potega <= liczba; potega = podstawa * potega)
    {
        cout << podstawa * potega << endl;
    }

    return 0;
}
