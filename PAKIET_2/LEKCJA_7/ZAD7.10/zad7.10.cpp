// Napisz funkcję, która przyjmuje jako argument liczbę naturalną, a zwraca wektor, którego każdy kolejny element jest przedstawiony w postaci index! (Silnia od liczby pozycji w wektorze.)
// Przykład: n = 5 -> [1,2,6,24,120]

#include <iostream>
#include <vector>

using namespace std;

int Silnia(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * Silnia(n - 1);
}

vector<int> SilniaElementowwektora(int n)
{
    vector<int> liczby1;

    for (int i = 1; i < n + 1; i++)
    {
        liczby1.push_back(Silnia(i));
    }

    return liczby1;
}

int main()
{
    int n = 5;

    vector<int> liczby = SilniaElementowwektora(n);

    for (int i = 0; i < liczby.size(); i++)
    {
        cout << liczby[i] << " ";
    }

    return 0;
}
