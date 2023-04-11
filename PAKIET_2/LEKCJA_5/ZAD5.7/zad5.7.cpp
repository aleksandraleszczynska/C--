// Napisz program, znajdujący maksymalny element na przekątnych - kwadratowej tablicy dwuwymiarowej.

#include <iostream>

using namespace std;

int main()
{
    int rowCount = 3;
    int columnCount = 3;
    int tablica[rowCount][columnCount];

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << "Podaj liczbe do tablicy" << endl;
            cin >> tablica[i][j];
        }
    }

    int max = tablica[0][0];

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j = j + 2)
        {
            if (tablica[i][j] > max)
            {
                max = tablica[i][j];
            }
        }
    }

    return 0;
}