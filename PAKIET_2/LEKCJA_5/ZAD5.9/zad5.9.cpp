//Napisz program, wypisujący wszystkie litery duże wpisane do tablicy 2 wymiarowej na małe.

#include <iostream>

using namespace std;

int main()
{
    int rowCount = 3;
    int columnCount = 3;
    int tablica[rowCount][columnCount];
    char litera;

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << "Podaj wielka litere do tablicy" << endl;
            cin >> litera;
            tablica[i][j] = litera;
        }
    }

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << (char)tablica[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            tablica[i][j] = tablica[i][j] + 32;
            cout << (char)tablica[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}