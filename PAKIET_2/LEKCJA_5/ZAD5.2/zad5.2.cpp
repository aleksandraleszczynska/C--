// Napisz program, sumujący elementy parzyste i nieparzyste - tablicy dwuwymiarowej.

#include <iostream>

using namespace std;

int main()
{
    int rowCount = 3;
    int columnCount = 3;
    int tablica[rowCount][columnCount];

    int sumaParzystych = 0;
    int sumaNieparzystych = 0;

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << "Podaj liczbe do tablicy" << endl;
            cin >> tablica[i][j];
        }
    }

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            if (tablica[i][j] % 2 == 0)
            {
                sumaParzystych = sumaParzystych + tablica[i][j];
            }
            if (tablica[i][j] % 2 != 0)
            {
                sumaNieparzystych = sumaNieparzystych + tablica[i][j];
            }
        }
    }

    cout << "Suma liczb parzystch w tablicy wynosi " << sumaParzystych << " a suma liczb nieparzystych " << sumaNieparzystych << endl;

    return 0;
}