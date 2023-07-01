//Napisz program, który realizuje sortowanie tablicy rosnąco za pomocą algorytmu sortowania bąbelkowego.

#include <iostream>
using namespace std;

int main()
{
    int tablica[5] = {8, 5, 3, 4, 9};

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (tablica[i] > tablica[i + 1])
            {
                swap(tablica[i], tablica[i+1]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << tablica[i] << " ";
    }
    return 0;
}