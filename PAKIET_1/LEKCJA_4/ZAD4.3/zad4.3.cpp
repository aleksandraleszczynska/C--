// Napisz funkcję, która przyjmuje 3 liczby jako argumenty. Jeżeli co najmniej jedna z tychliczb należy do przedziału od 13 do 19 zwróć True, w przeciwnym wypadku False.

#include <iostream>

using namespace std;

bool CzyLiczbyNalezaDoPrzedzialuOd13Do19(int liczba1, int liczba2, int liczba3)
{
    if (liczba1 >= 13 && liczba1 <= 19 || liczba2 >= 13 && liczba2 <= 19 || liczba3 >= 13 && liczba3 <= 19)
    {
        return true;
    }
    return false;
}

int main()

{
    cout << CzyLiczbyNalezaDoPrzedzialuOd13Do19(1, 14, 5) << endl;

    return 0;
}