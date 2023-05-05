// Napisz funkcję, która sprawdzi, czy wszystkie cyfry w wektorze tworzą razem palindrom.

#include <iostream>
#include <vector>

using namespace std;

bool CzyCyfryWWektorzeTworzaPalindrom(vector<int> liczby)
{
    for (int i = 0; i < liczby.size(); i++)
    {
        if (liczby[i] != liczby[liczby.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> liczby = {1, 2, 3, 2, 1};

    cout << CzyCyfryWWektorzeTworzaPalindrom(liczby);

    return 0;
}