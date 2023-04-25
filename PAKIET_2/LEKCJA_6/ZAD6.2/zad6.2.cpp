// Hasła
// Informatyk z firmy „KompOK” zapisał w pliku hasla.txt 200 haseł. Każde hasło umieszczone jest w osobnym wierszu pliku. Hasło składa się tylko z małych liter alfabetu angielskiego, zaś jego długość wynosi od 3 do 10 znaków.
// Wykorzystując dane zawarte w tym pliku, wykonaj poniższe polecenia.
// Odpowiedzi do poszczególnych podpunktów zapisz w plikach tekstowych o nazwach wynik4a.txt, wynik4b.txt, wynik4c.txt
// a) W pliku wynik4a.txt podaj, ile haseł ma parzystą, a ile nieparzystą liczbę znaków.

#include <iostream> 
#include <fstream>

using namespace std;

bool CzyParzystaLiczbaZnakow (string haslo)
{
    if (haslo.length() % 2 != 0)
    {
        return false;
    }
    return true;
}

int main()
{
    fstream plik;
    ofstream zapis;
    string slowo;
    int licznik1 = 0;
    int licznik2 = 0;
    plik.open("hasla.txt");
    zapis.open("wynik4a.txt");

    while(!plik.eof())
    {
        plik >> slowo;
        if (CzyParzystaLiczbaZnakow(slowo) == true)
        {
            licznik1++;
        }
        else
        {
            licznik2++;
        }  
    }

    zapis << "Ilosc hasel z parzysta liczba znakow: " << licznik1 << endl;
    zapis << "Ilosc hasel z nieparzysta liczba znakow: " << licznik2 << endl;

    zapis.close();

    return 0;
}