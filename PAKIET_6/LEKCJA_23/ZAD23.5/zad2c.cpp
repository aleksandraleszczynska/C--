//algorytm zad 2 podpunkt c matura 2011
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dzielnik = 2;
    while(n>1)
    {
        if(n%dzielnik == 0)
        {
            n = n/dzielnik;
            cout << dzielnik << ", ";
        }
        else
        {
            dzielnik++;
        }
    }
    return 0;
}