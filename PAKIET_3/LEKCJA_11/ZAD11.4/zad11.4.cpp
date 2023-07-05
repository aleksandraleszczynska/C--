// Posortuj rosnąco tablicę 2wymiarową wierszami za pomocą algorytmu sortowanie rekurencyjnego.
// Końcowy wynik wyświetl w postaci tablicy 2 wymiarowej

#include <iostream>
using namespace std;

void merge(int tablica[], int lewyIndex, int pivot, int prawyIndex, int pomocniczaTablica[])
{
    for (int i = lewyIndex; i <= prawyIndex; i++)
    {
        pomocniczaTablica[i] = tablica[i]; // przepisujemy cala zawrtosc z tablicy glownej do pomocniczej
    }

    int indexLewejStrony = lewyIndex;  // ustawiamy indexLewejStrony na pierwsze element mergowanej lewej tablic(lewa kreska)
    int indexPrawejStrony = pivot + 1; // ustawiamy indexPrawejStrony na pierwszy element mergowanej prawej tablicy (prawa kreska)
    int index = lewyIndex;             // index glownej tablicy do ktorej wpisujemy koncowe wartosci z mergowania

    while (indexLewejStrony <= pivot && indexPrawejStrony <= prawyIndex)
    { // dopoki lewa i prawa mergowana tablica nie jest pusta
        if (pomocniczaTablica[indexLewejStrony] <= pomocniczaTablica[indexPrawejStrony])
        {                                                         // jezeli wartosc nad lewa kreska jest mniejsza niz nad prawa kreska
            tablica[index] = pomocniczaTablica[indexLewejStrony]; // do tablicy glownej wpisujemy wartosc z nad lewej kreski
            indexLewejStrony++;                                   // przepisalismy wartosc nad lewej kreski wiec lewa kreska idzie o jeden dalej
        }
        else
        {
            tablica[index] = pomocniczaTablica[indexPrawejStrony]; // do talbicy glownej wpsiuuejmy wartosc z nad PRAWEJ kreski
            indexPrawejStrony++;                                   // przepisualismy wartosc nad prawej kreski wiec prawa kreska idzie dalej
        }
        index++; // wpisuejym wartosci do glownej tablicy wiec musimy wiedziec na jaki kolejy element wpiszemy wartosc
    }

    while (indexLewejStrony <= pivot)
    {                                                         // przepisujemy pozostala czesc tablicy ktora zosta
        tablica[index] = pomocniczaTablica[indexLewejStrony]; // na ostatnei elementy mergowanej tablicy przepisujemy pozostale niezmergowane elemty
        index++;                                              // idziemy dalej w tablicy glownej
        indexLewejStrony++;                                   // idziemy dalej pozostalej czesci nieprzepisanej
    }
}

void mergerSort(int tablica[], int lewyIndex, int prawyIndex, int pomocniczaTablica[])
{
    if (lewyIndex != prawyIndex)
    {                                                                    // rozdzielaj tablice dopoki nie sa jedno elementowe czyli Lindex == pIndex
        int pivot = (lewyIndex + prawyIndex) / 2;                        // liczymy pivot
        mergerSort(tablica, lewyIndex, pivot, pomocniczaTablica);        // lewy nawaias
        mergerSort(tablica, pivot + 1, prawyIndex, pomocniczaTablica);   // prawy nawias
        merge(tablica, lewyIndex, pivot, prawyIndex, pomocniczaTablica); // mergowanie
    }
}

void TabliceJednowymiarowe(int tablica[][3])
{
    int tablicajednowymiarowa[4];

    for(int i = 0; i < 4; i++)
    {
        tablicajednowymiarowa[i] = tablica[i][3];
    }

    return tablicajednowymiarowa;
}

int main()
{
    int tablica[4][3];

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cin >> tablica[j][i];
        }
    }

    int lewyIndex = 0;
    int prawyIndex = 3;
    int pomocnicznaTablica[4][3];

    mergerSort(tablica, lewyIndex, prawyIndex, pomocnicznaTablica);

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << tablica[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
