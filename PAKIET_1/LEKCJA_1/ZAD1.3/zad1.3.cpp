// Napisz program, który wczyta od użytkownika dwie liczby (x i y), a następnie obliczy resztę z dzielenia tych liczby i wyświetli napis “Reszta z dzielenia liczby (x) przez (y) to:(wynik)”

#include <iostream>

using namespace std;

int main()

{
    int x;
    int y;
    cin >> x;
    cin >> y;
    cout << "Reszta z dzielenia liczby " << x << " przez " << y << " to: " << x % y << endl;
    return 0;
}
