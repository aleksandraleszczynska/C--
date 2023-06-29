// Napisz program, który sprawdzi czy podany wzorzec zawiera się w tekście.

#include <iostream>
#include <cmath>

using namespace std;

bool CzyWzorzecZawieraSieWTekscie(string tekst, string wzorzec)
{
    int licznik = wzorzec.length();

    for (int i = 0; i < tekst.length(); i++)
    {
        if (tekst[i] == wzorzec[i])
        {
            licznik--;
        }
        else
        {
            licznik = wzorzec.length();
            i = 0;
        }
    }

    return licznik == 0;
}

int main()
{
    cout << CzyWzorzecZawieraSieWTekscie("LOOOLOLOTTT", "LOT");

    return 0;
}
