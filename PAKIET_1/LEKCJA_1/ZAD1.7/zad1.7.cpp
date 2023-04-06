// Napisz program obliczający pole trójkątnego nachos’a o podanej przez użytkownika wysokości i podstawie.

#include <iostream>

using namespace std;

int main()

{
    int a, h;

    cout << "Podaj dlugosc podstawy nachos'a: " << endl;

    cin >> a;

    cout << "Podaj wysokosc nachos'a: " << endl;

    cin >> h;

    cout << "Pole nachos'a jest rowne " << (a * h) / 2 << endl;

    return 0;
}