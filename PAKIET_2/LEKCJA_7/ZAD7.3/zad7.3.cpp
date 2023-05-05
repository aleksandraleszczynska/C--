// Napisz funkcje, ktora przyjmuje jako argument wektor i zwraca True, jezeli wszystkie elementy w wektorze nie sa podzielne przez 13.

#include <iostream>
#include <vector>

using namespace std;

bool CzyWszystkieElementyWWektorzeNieSaPodzielnePrzez13(vector<int> liczby)
{
    for (int i = 0; i < liczby.size(); i++)
    {
        if (liczby[i] % 13 == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> liczby = {13, 33, 51, 67, 90};

    cout << CzyWszystkieElementyWWektorzeNieSaPodzielnePrzez13(liczby);

    return 0;
}
