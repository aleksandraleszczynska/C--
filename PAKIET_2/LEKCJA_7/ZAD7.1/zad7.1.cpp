// Napisz program, ktory dla danej liczby calkowitej wpisze wszystkie jej cyfry do wektora.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string liczba;
    cin >> liczba;

    vector<char> liczby;

    for (int i = 0; i < liczba.length(); i++)
    {
        liczby.push_back(liczba[i]);
    }

    for (int i = 0; i < liczby.size(); i++)
    {
        cout << liczby[i] << endl;
    }

    return 0;
}
