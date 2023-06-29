//Napisz program, który obliczy wartość wielomianu dla podanych współczynników - iteracyjne.

#include <iostream>

using namespace std;

int horner (int tablica[], int stopien, int x)
{
    int wynik = tablica[0];

    for (int i = 1; i <= stopien; i++)
    {
        wynik = x*wynik + tablica[i];
    }

    return wynik;
}

int main()
{
    int wspolczynniki[4] = {2,1,3,9};
    cout << horner(wspolczynniki, 3, 10);
    return 0; 
}
