// Napisz program wczytujący z klawiatury 10 liczb całkowitych. Wczytane liczby należy wydrukować na ekranie w odwrotnej kolejności.

#include <iostream>

using namespace std;

int main()

{
    int tablica[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Podaj liczbe do " << i << " komorki tablicy" << endl;
        cin >> tablica[i];
    }

    for (int j = 9; j >= 0; j--)
    {
        cout << tablica[j] << " ";
    }

    return 0;
}
