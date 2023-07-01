// Napisz program, który realizuje sortowanie przez wybór malejąco.

#include <iostream>
using namespace std;

void SortowaniePrzezWybor(int tablica[], int dlugosc)
{
   for (int j = 0; j < dlugosc - 1; j++)
   {
      int index = j;

     for(int i = j+1; i < dlugosc; i++)
    {
        if (tablica[index] < tablica[i])
        {
            index = i;
        }
    }
    int temp = tablica[j];
    tablica[j] = tablica[index];
    tablica[index] = temp;
   }
}

int main()
{
    int dlugosc = 5;
    int tablica[5] = {1, 4, 6, 8, 10};
    SortowaniePrzezWybor(tablica, dlugosc);
    for(int i = 0; i < dlugosc; i++)
    {
        cout << tablica[i] << " ";
    }
    return 0;
}
