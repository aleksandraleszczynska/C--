// Napisz program, który realizuję sortowanie przez wstawianie, sortując ciąg malejąco.

#include <iostream>
using namespace std;

void SortowaniePrzezWstawianie(int tablica[], int dlugosc)
{
    int liczba, j;
    for (int i = 1; i < dlugosc; i++)
    {
        liczba = tablica[i];
        j = i - 1;

        while (j >= 0 && tablica[j] < liczba)
        {
            tablica[j + 1] = tablica[j];
            --j;
        }
        tablica[j + 1] = liczba;
    }

    for (int i = 0; i < dlugosc; i++)
    {
        cout << tablica[i] << " ";
    }
}
int main()
{
    int dlugosc = 5;
    int liczby[dlugosc] = {21, 45, 34, 76, 88};
    SortowaniePrzezWstawianie(liczby, dlugosc);
    return 0;
}