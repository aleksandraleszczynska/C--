// Napisz funkcję, która sprawdzi, czy podany w argumencie PESEL jest prawidłowy na podstawie wyliczenia sumy kontrolnej.

#include <iostream>

using namespace std;

bool CzyPeselJestPoprawny(string pesel)
{
    int suma = pesel[0] * 1 + pesel[1] * 3 + pesel[2] * 7 + pesel[3] * 9 + pesel[4] * 1 + pesel[5] * 3 + pesel[6] * 7 + pesel[7] * 9 + pesel[8] * 1 + pesel[9] * 3 + pesel[10] * 1;

    if (suma % 10 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << CzyPeselJestPoprawny("12345678923");

    return 0;
}