// Napisz program, który zamienia liczby z systemu dowolnego na decymalny. (Spróbuj nie przepisywać kodu z lekcji.)

#include <iostream>
#include <cmath>

using namespace std;

int ZamianaZeZnakuNaLiczbe(char znak)
{
    if (znak >= 65)
    {
        return znak - 55;
    }
    return znak - 48;
}


int ZmianaZDowolnegoNaDecymalny(string liczba, int system)
{
    int nowaliczba = 0;

    for (int i = 0; i < liczba.length(); i++)
    {
        int cyfra = ZamianaZeZnakuNaLiczbe(liczba[i]);
        nowaliczba = nowaliczba + cyfra * pow(system, liczba.length() - i - 1);
    }

    return nowaliczba;
}

int main()
{
    cout << ZmianaZDowolnegoNaDecymalny("AB", 16);
    return 0;
}