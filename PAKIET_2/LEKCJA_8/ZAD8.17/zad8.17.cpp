// Napisz program, który zamienia liczby z systemu decymalnego na binarny. (Spróbuj nie przepisywać kodu z lekcji.)

#include <iostream>
#include <cmath>

using namespace std;

char ZamianaZLiczbyNaZnak(int reszta)
{
    return reszta + 48;
}

string OdwracanieLiczbyBinarnej (string liczbabinarna)
{
    string nowaliczbabinarna;

    for (int i = liczbabinarna.length(); i >= 0 ; i--)
    {
        nowaliczbabinarna = nowaliczbabinarna + liczbabinarna[i];
    }
    return nowaliczbabinarna;
}

string ZmianaZDecymalnegoNaBinarny(int liczba)
{
    string liczbabinarna = "";

    while (liczba > 0)
    {
        int reszta = liczba % 2;

        liczbabinarna = liczbabinarna + ZamianaZLiczbyNaZnak(reszta);

        liczba = liczba / 2;
    }

    return OdwracanieLiczbyBinarnej(liczbabinarna);
}

int main()
{
    cout << ZmianaZDecymalnegoNaBinarny(2);
    return 0;
}