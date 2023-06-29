// Napisz program, który sprawdzi czy podany wzorzec zawiera się w tekście.

#include <iostream>

using namespace std;

bool CzyWzorzecZawieraSieWTekscie(string tekst, string wzorzec)
{
    int licznik = 0;

    for (int i = 0; i < tekst.length(); i++)
    {
        if (tekst[i] == wzorzec[licznik])
        {
            licznik++;
        }
        else
        {
            if (licznik > 0)
            {
                i = i - licznik;
            }
            licznik = 0;
        }

        if (licznik == wzorzec.length())
        {
            return true;
        }
    }

    return false;
}

int main()
{
    cout << CzyWzorzecZawieraSieWTekscie("LOOOLOLOTTT", "LOT");

    return 0;
}
