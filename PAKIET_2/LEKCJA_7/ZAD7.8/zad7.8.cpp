// Napisz funkcję, która rekurencyjnie zlicza sumę elementów wektora.

#include <iostream>
#include <vector>

using namespace std;

int SumaElementowWektora(vector<int> liczby)
{
    if (liczby.size() == 0)
    {
        return 0;
    }

    int suma = liczby[liczby.size() - 1];
    liczby.pop_back();
    return SumaElementowWektora(liczby) + suma;
}

int main()
{
    vector<int> liczby = {1, 2, 3};

    cout << SumaElementowWektora(liczby);

    return 0;
}
