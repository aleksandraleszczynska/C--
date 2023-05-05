// Napisz funkcję, która dla danego wektora wyrzuci wszystkie liczby, które są mniejsze od sumy największego i najmniejszego elementu podzielnego przez 2 [(największyEl + najmniejszyEl) /2] i zwróci zaktualizowany wektor.

#include <iostream>
#include <vector>

using namespace std;

int NajwiekszyElement(vector<int> liczby)
{
    int najwieksza = liczby[0];
    for (int i = 1; i < liczby.size(); i++)
    {
        if (liczby[i] > najwieksza)
        {
            najwieksza = liczby[i];
        }
    }
    return najwieksza;
}

int NajmniejszyElement(vector<int> liczby)
{
    int najmniejsza = liczby[0];
    for (int i = 1; i < liczby.size(); i++)
    {
        if (liczby[i] < najmniejsza)
        {
            najmniejsza = liczby[i];
        }
    }
    return najmniejsza;
}

vector<int> LiczbyMniejszeOdSumyNajwiNajmElementuPodzielonegoPrzez2(vector<int> liczby)
{
    vector<int> zmieniony;
    int sumapodzielonaprzez2 = (NajwiekszyElement(liczby) + NajmniejszyElement(liczby)) / 2;

    for (int i = 0; i < liczby.size(); i++)
    {
        if (liczby[i] >= sumapodzielonaprzez2)
        {
            zmieniony.push_back(liczby[i]);
        }
    }
    return zmieniony;
}

int main()
{
    vector<int> liczby = {1, 3, 12, 10};

    vector<int> zmieniony = LiczbyMniejszeOdSumyNajwiNajmElementuPodzielonegoPrzez2(liczby);

    for (int i = 0; i < zmieniony.size(); i++)
    {
        cout << zmieniony[i] << " ";
    }

    return 0;
}
