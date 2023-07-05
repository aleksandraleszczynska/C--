//Algorytm sortowania przez scalanie z wykładu

#include <iostream>
using namespace std;

void merge(int tablica[], int lewyIndex, int pivot, int prawyIndex, int pomocniczaTablica[]) {
    for(int i=lewyIndex; i <= prawyIndex; i++) {
        pomocniczaTablica[i] = tablica[i]; // przepisujemy cala zawrtosc z tablicy glownej do pomocniczej
    }

    int indexLewejStrony = lewyIndex; // ustawiamy indexLewejStrony na pierwsze element mergowanej lewej tablic(lewa kreska)
    int indexPrawejStrony = pivot + 1; // ustawiamy indexPrawejStrony na pierwszy element mergowanej prawej tablicy (prawa kreska)
    int index = lewyIndex; // index glownej tablicy do ktorej wpisujemy koncowe wartosci z mergowania 

    while(indexLewejStrony <= pivot && indexPrawejStrony <= prawyIndex) { // dopoki lewa i prawa mergowana tablica nie jest pusta
        if(pomocniczaTablica[indexLewejStrony] <= pomocniczaTablica[indexPrawejStrony]) { // jezeli wartosc nad lewa kreska jest mniejsza niz nad prawa kreska
            tablica[index] = pomocniczaTablica[indexLewejStrony]; // do tablicy glownej wpisujemy wartosc z nad lewej kreski
            indexLewejStrony++; // przepisalismy wartosc nad lewej kreski wiec lewa kreska idzie o jeden dalej
        } else {
            tablica[index] = pomocniczaTablica[indexPrawejStrony]; // do talbicy glownej wpsiuuejmy wartosc z nad PRAWEJ kreski
            indexPrawejStrony++; // przepisualismy wartosc nad prawej kreski wiec prawa kreska idzie dalej
        }
        index++; // wpisuejym wartosci do glownej tablicy wiec musimy wiedziec na jaki kolejy element wpiszemy wartosc
    }

    while(indexLewejStrony <= pivot) { // przepisujemy pozostala czesc tablicy ktora zosta
        tablica[index] = pomocniczaTablica[indexLewejStrony]; // na ostatnei elementy mergowanej tablicy przepisujemy pozostale niezmergowane elemty
        index++; // idziemy dalej w tablicy glownej
        indexLewejStrony++; // idziemy dalej pozostalej czesci nieprzepisanej
    }
}

void mergerSort(int tablica[], int lewyIndex, int prawyIndex, int pomocniczaTablica[]) {
    if(lewyIndex != prawyIndex) { // rozdzielaj tablice dopoki nie sa jedno elementowe czyli Lindex == pIndex
        int pivot = (lewyIndex + prawyIndex) / 2; // liczymy pivot
        mergerSort(tablica, lewyIndex, pivot, pomocniczaTablica); // lewy nawaias
        mergerSort(tablica, pivot + 1, prawyIndex, pomocniczaTablica); // prawy nawias
        merge(tablica, lewyIndex, pivot, prawyIndex, pomocniczaTablica); // mergowanie
    }

}


int main() {
    int tablica[8] = {5, 8, 7, 2, 3, 2, 6, 8};
    int lewyIndex = 0;
    int prawyIndex = 7;
    int pomocnicznaTablica[8];
    mergerSort(tablica, lewyIndex, prawyIndex, pomocnicznaTablica);

    for(int i=0; i<8; i++) {
        cout << tablica[i] << " ";
    }
    return 0; 
}
