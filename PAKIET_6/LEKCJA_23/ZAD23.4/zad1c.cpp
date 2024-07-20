//zegar zad 1 podpunkt c matura 2011
#include <iostream>
using namespace std;
char zmiananaznak(int liczba)
{
    return liczba + 48;
}
string odwracanie(string napis)
{
    for (int i = 0; i < napis.length() / 2; i++)
    {
        swap(napis[i], napis[napis.length() - i - 1]);
    }
    return napis;
}
int main()
{
    int s;
    cin >> s;
    string napis = "";
    while (s > 0)
    {
        if (s % 2 == 0)
        {
            napis = napis + zmiananaznak(0);
        }
        else
        {
            napis = napis + zmiananaznak(1);
        }
        s = s / 2;
    }
    napis = odwracanie(napis);
    int licznik = 0;
    for (int i = 0; i <= napis.length() - 1; i++)
    {
        if (napis[i] == '1')
        {
            licznik++;
        }
    }
    cout << licznik;
    return 0;
}