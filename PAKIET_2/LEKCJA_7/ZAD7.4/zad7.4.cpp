// Napisz funkcję, która zwraca średnią wartość elementów z wektora podanego w argumencie.

#include <iostream>
#include <vector>

using namespace std;

int SredniaWartoscElementowWektora(vector<int> liczby)
{
    int suma = 0;

    for (int i = 0; i < liczby.size(); i++)
    {
        suma = suma + liczby[i];
    }

    int wartosc = suma / liczby.size();

    return wartosc;
}

int main()
{
    vector<int> liczby = {12, 40, 33};

    cout << SredniaWartoscElementowWektora(liczby);

    return 0;
}