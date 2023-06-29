//Napisz program, który obliczy wartość wielomianu za pomocą schematu hornera rekurencyjnie.

#include <iostream>

using namespace std;

int horner (int tablica[], int stopien, int x)
{
   if (stopien == 0)
   {
    return tablica[0];
   }

   return x*horner(tablica, stopien - 1, x) + tablica[stopien];
}

int main()
{
    int wspolczynniki[4] = {2,1,3,9};
    cout << horner(wspolczynniki, 3, 10);
    return 0; 
}