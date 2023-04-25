// Hasła
// Informatyk z firmy „KompOK” zapisał w pliku hasla.txt 200 haseł. Każde hasło umieszczone jest w osobnym wierszu pliku. Hasło składa się tylko z małych liter alfabetu angielskiego, zaś jego długość wynosi od 3 do 10 znaków.
// Wykorzystując dane zawarte w tym pliku, wykonaj poniższe polecenia. Odpowiedzi do poszczególnych podpunktów zapisz w plikach tekstowych o nazwach wynik4a.txt, wynik4b.txt, wynik4c.txt
// c) Zapisz w pliku wynik4c.txt zestawienie haseł (po jednym w wierszu) zawierających w sobie dwa kolejne znaki, których suma kodów ASCII wynosi 220.

#include <iostream>
#include <fstream>

using namespace std;

bool funkcja(string slowo)
{
    for (int i = 0; i < slowo.length(); i++)
    {
        if ((char)slowo[i] + (char)slowo[i + 1] == 220)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    fstream plik;
    ofstream zapis;
    string slowo;

    plik.open("hasla.txt");
    zapis.open("wynik4c.txt");

    while (!plik.eof())
    {
        plik >> slowo;

        if (funkcja(slowo) == true)
        {
            zapis << slowo << endl;
        }
    }

    zapis.close();

    return 0;
}