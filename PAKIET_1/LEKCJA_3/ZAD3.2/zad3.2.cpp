// Napisz program wczytujący ciąg liczb rzeczywistych. Każdą podana liczbę należy podnieść do kwadratu, a następnie wydrukować na ekranie.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj dlugosc tablicy" << endl;
    int k;
    cin >> k;

    int tablica[k];

    for (int i = 0; i < k; i++)
    {
        cout << "Podaj liczbe do tablicy" << endl;
        cin >> tablica[i];
    }

    for (int j = 0; j < k; j++)
    {
        int liczba = tablica[j] * tablica[j];
        cout << liczba << " ";
    }

    return 0;
}