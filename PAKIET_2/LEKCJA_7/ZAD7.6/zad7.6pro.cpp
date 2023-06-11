// Napisz funkcję, która sprawdzi, czy wszystkie cyfry w wektorze tworzą razem palindrom.

#include <iostream>
#include <vector>

using namespace std;

vector<char> ZamianaNaWektorZnakow(vector<int> liczby)
{
    vector<char> noweliczby;

    for (int i = 0; i < liczby.size(); i++)
    {

        int liczba = liczby[i];

        vector<int> zmiana;

        if (liczba < 10)
        {
            noweliczby.push_back('0' + liczba);
        }
        else
        {
            while (liczba > 0)
            {
                int cyfra = liczba % 10;
                zmiana.push_back(cyfra);
                liczba = liczba / 10;
            }

            for (int i = 0; i < zmiana.size(); i++)

                noweliczby.push_back('0' + zmiana[zmiana.size() - i - 1]);
        }
    }

    return noweliczby;
}

bool CzyCyfryWWektorzeTworzaPalindrom(vector<char> nowy)
{

    for (int i = 0; i < nowy.size(); i++)
    {
        if (nowy[i] != nowy[nowy.size() - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    vector<int> liczby = {1, 2, 21};

    vector<char> nowy = ZamianaNaWektorZnakow(liczby);

    for (int i = 0; i < nowy.size(); i++)
    {
        cout << nowy[i] << "";
    }

    cout << endl;

    cout << CzyCyfryWWektorzeTworzaPalindrom(nowy);

    return 0;
}