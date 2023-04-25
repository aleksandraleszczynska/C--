// Hasła
// Informatyk z firmy „KompOK” zapisał w pliku hasla.txt 200 haseł. Każde hasło umieszczone jest w osobnym wierszu pliku. Hasło składa się tylko z małych liter alfabetu angielskiego, zaś jego długość wynosi od 3 do 10 znaków.
// Wykorzystując dane zawarte w tym pliku, wykonaj poniższe polecenia. Odpowiedzi do poszczególnych podpunktów zapisz w plikach tekstowych o nazwach wynik4a.txt, wynik4b.txt, wynik4c.txt
// b) W pliku wynik4b.txt utwórz zestawienie haseł (po jednym w wierszu), które są palindromami.
// Palindrom to wyraz brzmiący tak samo przy czytaniu z lewej strony do prawej, jak i odwrotnie, np. kajak, potop.

#include <iostream>
#include <fstream>

using namespace std;

bool CzyPalindrom(string napis)
{
    for (int i = 0; i < napis.length(); i++)
    {
        if (napis[i] != napis[napis.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    fstream plik;
    ofstream zapis;
    string slowo;

    plik.open("hasla.txt");
    zapis.open("wynik4b.txt");

    while (!plik.eof())
    {
        plik >> slowo;

        if (CzyPalindrom(slowo) == true)
        {
            zapis << slowo << endl;
        }
    }

    zapis.close();

    return 0;
}