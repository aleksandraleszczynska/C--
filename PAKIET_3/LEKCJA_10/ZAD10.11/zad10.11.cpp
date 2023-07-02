// W pliku tekstowym anagram.txt znajduje się 200 wierszy zawierających po 5 słów w każdym wierszu. Słowa oddzielone są znakiem odstępu. Długość każdego ze słów wynosi od 1 do 20 znaków. Przykład: abcd cdba dbac cbad dcba barbakan xle ala foto otof smok ayszkm lampa ayszkm bakara skok arabanta oko agnieba dyskietka …… Napisz program w wybranym przez siebie języku programowania, za pomocą którego wykonasz poniższe polecenia:
//  a) Wyszukaj w pliku anagram.txt te wiersze, w których wszystkie słowa znajdujące się w danym wierszu mają taką samą liczbę znaków. Zapisz te wiersze w pliku odp_4a.txt.

#include <iostream>
#include <fstream>
using namespace std;

bool CzyJednakowaDlugosc(string napis1, string napis2, string napis3, string napis4, string napis5)
{
    int dlugosc = napis1.length();

    if (napis2.length() != dlugosc)
    {
        return false;
    }
    if (napis3.length() != dlugosc)
    {
        return false;
    }
    if (napis4.length() != dlugosc)
    {
        return false;
    }
    if (napis5.length() != dlugosc)
    {
        return false;
    }
    return true;
}

int main()
{
    fstream plik;
    ofstream zapis;
    string slowo1, slowo2, slowo3, slowo4, slowo5;

    plik.open("anagram.txt");
    zapis.open("../PLIKI/odp_4a.txt");

    zapis << "a) ";

    while (!plik.eof())
    {
        plik >> slowo1 >> slowo2 >> slowo3 >> slowo4 >> slowo5;

        if (CzyJednakowaDlugosc(slowo1, slowo2, slowo3, slowo4, slowo5) == true)
        {
            zapis << slowo1 << " " << slowo2 << " " << slowo3 << " " << slowo4 << " " << slowo5 << endl;
        }
    }

    zapis.close();

    return 0;
}