// Napisać program, w którym parametrem jest liczba całkowita dodatnia, program wyświetla na ekranie kolejno wszystkie liczby niepatrzyste niewiększe od podanej liczby. Przykład, dla podanej liczby 10, program powinien wyświetlić 1, 3, 5, 7 i 9.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj liczbe calkowita dodatnia" << endl;

    int liczba;

    cin >> liczba;

    for (int i = 0; i <= liczba; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
