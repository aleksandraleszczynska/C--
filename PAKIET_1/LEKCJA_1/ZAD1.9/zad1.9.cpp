// Napisz program z “konsolowym menu” (za pomocą komendy cout wyświetl możliwe dla użytkownika opcje, poprzedzając je kolejnymi cyframi 1…2…, a następnie poproś użytkownika o wpisanie cyfry odpowiadającej wyborowi). Program ma pytać użytkownika jakiej figury pole chce obliczyć.

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    cout << "Wybierz numer figury, ktorej pole chcesz policzyc: " << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Trojkat" << endl;
    cout << "4. Rab" << endl;
    cout << "5. Kolo" << endl;
    cout << "6. Trapez" << endl;

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

    return 0;
}
