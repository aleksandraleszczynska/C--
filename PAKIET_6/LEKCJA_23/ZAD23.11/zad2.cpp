// zad2 duamenty matura 2012
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tablica[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tablica[i];
    }
    int max = tablica[0];
    int pozycja;
    for (int i = 1; i < n; i++)
    {
        if (max < tablica[i])
        {
            max = tablica[i];
            pozycja = i;
        } 
    }
    cout << pozycja + 1;
    return 0;
}