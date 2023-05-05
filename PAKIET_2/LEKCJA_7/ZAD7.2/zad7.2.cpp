// Napisz funkcję, która przyjmuje jako argument wektor i zwraca sumę wszystkich jego liczb parzystych.

#include <iostream>
#include <vector>

using namespace std;

int SumaLiczbParzystychWektora(vector<int> liczby)
{
    int suma = 0;

    for (int i = 0; i < liczby.size(); i++)
    {
        if (liczby[i] % 2 == 0)
        {
            suma = suma + liczby[i];
        }
    }

    return suma;
}

int main()
{
    vector<int> liczby = {12, 33, 51, 67, 90};

    cout << SumaLiczbParzystychWektora(liczby);

    return 0;
}
