// Napisz program, który wczytuje słowo i sprawdza, ile jest w nim wystąpień litery “a”. Uwzglednij małe i wielkie litery.
// Nie korzystaj z wbudowanych funkcji**
//**wyjątkiem jest funkcja length()

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj slowo" << endl;

    string slowo;

    cin >> slowo;

    int dlugosc = slowo.length();

    int licznik = 0;

    for (int i = 0; i < dlugosc; i++)
    {
        if (slowo[i] == 'a' || slowo[i] == 'A')
        {
            licznik++;
        }
    }

    cout << "W wyrazie litera 'A' wystepuje " << licznik << " razy" << endl;

    return 0;
}
