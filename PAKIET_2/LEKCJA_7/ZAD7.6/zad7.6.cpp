// Napisz funkcję, która sprawdzi, czy wszystkie cyfry w wektorze tworzą razem palindrom.

#include <iostream>
#include <vector>

using namespace std;

bool CzyCyfryWWektorzeTworzaPalindrom(vector<int> liczby)
{
    vector<char> nowywektor;

    for (int i = 0; i < liczby.size(); i++)
    {
        int liczba = liczby[i];

        if (liczba == 0)
        {
            nowywektor.push_back('0');
        }
        else
        {
            while (liczba > 0)
            {
                int cyfra = liczba % 10;
                nowywektor.push_back(cyfra + '0');
                liczba = liczba / 10;
            }
        }
    }

    for (int i = 0; i < nowywektor.size(); i++)
    {
        if (nowywektor[i] != nowywektor[nowywektor.size() - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    vector<int> liczby = {1, 24, 3, 42, 1};

    cout << CzyCyfryWWektorzeTworzaPalindrom(liczby);

    return 0;
}