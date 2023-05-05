// Napisz program, w którym funkcja przyjmuje dwa wektory jako argumenty i zamieni w nich elementy miejscami, których wartości są liczbami pierwszymi z wektora podanego jako pierwszy argument.
// Przykład: [1,2,17,4] , [5,6,7,8] -> [1,6,7,4] , [5,2,17,8]

#include <iostream>
#include <vector>

using namespace std;

bool CzyLiczbaPierwsza(int liczba)
{
    if (liczba == 0 || liczba == 1)
    {
        return false;
    }

    for (int i = 2; i < liczba; i++)
    {
        if (liczba % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> ZmianaElementowMiejscami(vector<int> liczby1, vector<int> liczby2)
{
    for (int i = 0; i < liczby1.size(); i++)
    {
        int liczba = liczby1[i];

        if (CzyLiczbaPierwsza(liczba) == true)
        {
            liczby1[i] = liczby2[i];
            liczby2[i] = liczba;
        }
    }

    vector<int> polaczony;

    for (int i = 0; i < liczby1.size(); i++)
    {
        polaczony.push_back(liczby1[i]);
    }

    for (int i = 0; i < liczby2.size(); i++)
    {
        polaczony.push_back(liczby2[i]);
    }

    return polaczony;
}

int main()
{
    vector<int> liczby1 = {1, 2, 17, 4};
    vector<int> liczby2 = {5, 6, 7, 8};

    vector<int> zmienioneliczby = ZmianaElementowMiejscami(liczby1, liczby2);

    for (int i = 0; i < zmienioneliczby.size(); i++)
    {
        cout << zmienioneliczby[i] << " ";
    }

    return 0;
}