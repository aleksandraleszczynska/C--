// Firma XxDisc drukuje naklejki na dyskietki komputerowe. Napisz program obliczający pole, na jakim mogą przykleić etykietę z informacjami o zwartości dyskietki komputerowej. Użytkownik wprowadza długość boków dyskietki.
// Oprócz pola opakowania wyświetl jaką przykładową pojemność ma badana dyskietka. (Znajdź jaką standardową pojemność miały dyskietki.)

#include <iostream>

using namespace std;

int main()

{
    int x, y;

    cout << "Podaj dlugosc pierwszego boku dyskietki" << endl;

    cin >> x;

    cout << "Podaj dlugosc drugiego boku dyskietki" << endl;

    cin >> y;

    cout << "Pole powierzchni dyskietki jest rowne: " << x * y << endl;

    cout << "Standardowa wartosc pojemnosci dyskietki wynosi 1,44 MB" << endl;

    return 0;
}