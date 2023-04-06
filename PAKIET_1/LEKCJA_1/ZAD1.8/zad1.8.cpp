// Jeden z cyberprzestępców usunął bazę pacjentów jednej z lokalnych klinik medycznych. Po próbie odtworzenia, okazało się, że niektóre numery pesel są nieprawidłowe. Pomóż sprawdzać bazę danych. Napisz program sprawdzający czy podany przez użytkownika pesel jest poprawny. Możesz użyć 11 zmiennych do przechowania wszystkich cyfr numeru pesel użytkownika. Jak obliczyć sumę kontrolną numeru pesel znajdziesz na wikipedii.

#include <iostream>

using namespace std;

int main()

{
    int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11;

    cout << "Podaj 11 cyfr sprawdzanego peselu: " << endl;

    cin >> c1;
    cin >> c2;
    cin >> c3;
    cin >> c4;
    cin >> c5;
    cin >> c6;
    cin >> c7;
    cin >> c8;
    cin >> c9;
    cin >> c10;
    cin >> c11;

    int suma = (c1 * 1) + (c2 * 3) + (c3 * 7) + (c4 * 9) + (c5 * 1) + (c6 * 3) + (c7 * 7) + (c8 * 9) + (c9 * 1) + (c10 * 3) + (c11 * 1);

    if (suma % 10 == 0)
    {
        cout << "Pesel jest poprawny" << endl;
    }
    else
    {
        cout << "Pesel jest niepoprawny" << endl;
    }

    return 0;
}
