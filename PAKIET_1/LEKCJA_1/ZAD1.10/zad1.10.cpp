// Do poprzedniego zadania 1.9 dodaj możliwość obliczania objętości brył.

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    cout << "Wybierz numer figury, ktorej pole chcesz policzyc: " << endl;
    cout << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Trojkat" << endl;
    cout << "4. Rab" << endl;
    cout << "5. Kolo" << endl;
    cout << "6. Trapez" << endl;
    cout << endl;
    cout << "Lub wybierz bryle, ktorej objetosc chesz policzyc" << endl;
    cout << endl;
    cout << "7. Prostopadloscian" << endl;
    cout << "8. Szescian" << endl;
    cout << "9. Walec" << endl;
    cout << "10. Stozek" << endl;
    cout << "11. Kula" << endl;
    cout << "12. Ostroslup" << endl;

    int numer, a, b, c;

    cin >> numer;

    if (numer == 1)
    {
        cout << "Podaj wartosc boku kwadratu: " << endl;
        cin >> a;
        cout << "Pole kwadratu wynosi " << a * a << endl;
    }
    if (numer == 2)
    {
        cout << "Podaj wartosci bokow prostokata: " << endl;
        cin >> a;
        cin >> b;
        cout << "Pole prostokata wynosi " << a * b << endl;
    }
    if (numer == 3)
    {
        cout << "Podaj wartosc podstawy trojkata: " << endl;
        cin >> a;
        cout << "Podaj wartosc wysokosci trojkata: " << endl;
        cin >> b;
        cout << "Pole trojkata wynosi " << (a * b) / 2 << endl;
    }
    if (numer == 4)
    {
        cout << "Podaj wartosc dluzszej przekatnej rabu: " << endl;
        cin >> a;
        cout << "Podaj wartosc krotszej przekatnej rabu: " << endl;
        cin >> b;
        cout << "Pole rabu wynosi " << (a * b) / 2 << endl;
    }
    if (numer == 5)
    {
        cout << "Podaj wartosc promienia kola: " << endl;
        cin >> a;
        cout << "Pole kola wynosi " << a * a * M_PI << endl;
    }
    if (numer == 6)
    {
        cout << "Podaj wartosc dluzszej podstawy trapezu: " << endl;
        cin >> a;
        cout << "Podaj wartosc krotszej podstawy trapezu: " << endl;
        cin >> b;
        cout << "Podaj wartosc wysokosci trapezu: " << endl;
        cin >> c;
        cout << "Pole trapezu wynosi " << ((a + b) * c) / 2 << endl;
    }
    if (numer == 7)
    {
        cout << "Podaj wartosc pierwszego boku podstawy prostopadloscianu: " << endl;
        cin >> a;
        cout << "Podaj wartosc drugiego boku podstawy prostopadloscianu: " << endl;
        cin >> b;
        cout << "Podaj wartosc wysokosci prostopadloscianu: " << endl;
        cin >> c;
        cout << "Objetosc prostopadloscianu wynosi " << a * b * c << endl;
    }
    if (numer == 8)
    {
        cout << "Podaj wartosc boku szescianu: " << endl;
        cin >> a;
        cout << "Objetosc szescianu wynosi " << a * a * a << endl;
    }
    if (numer == 9)
    {
        cout << "Podaj wartosc promienia podstawy walca: " << endl;
        cin >> a;
        cout << "Podaj wartosc wysokosci walca: " << endl;
        cin >> b;
        cout << "Objetosc walca wynosi " << a * a * M_PI * b << endl;
    }
    if (numer == 10)
    {
        cout << "Podaj wartosc promienia podstawy stozka: " << endl;
        cin >> a;
        cout << "Podaj wartosc wysokosci stozka: " << endl;
        cin >> b;
        cout << "Objetosc stozka wynosi " << (a * a * M_PI * b) / 3 << endl;
    }
    if (numer == 11)
    {
        cout << "Podaj wartosc promienia kuli: " << endl;
        cin >> a;
        cout << "Objetosc kuli wynosi " << (4 / 3) * a * a * M_PI << endl;
    }
    if (numer == 12)
    {
        cout << "Podaj wartosc pierwszego boku podstawy: " << endl;
        cin >> a;
        cout << "Podaj wartosc drugiego boku podstawy: " << endl;
        cin >> b;
        cout << "Podaj wartosc wysokosci: " << endl;
        cin >> c;
        cout << "Objetosc ostroslupa wynosi " << (a * b * c) / 3 << endl;
    }

    return 0;
}
