//Napisz program, który deszyfruje tekst za pomocą szyfru playfair.

#include <iostream>
using namespace std;

int pobierzIndeksKolumnyLitery(char macierz[5][5], char litera)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (macierz[i][j] == litera)
            {
                return j;
            }
        }
    }
}

int pobierzIndeksWierszaLitery(char macierz[5][5], char litera)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (macierz[i][j] == litera)
            {
                return i;
            }
        }
    }
}

string pobierzZaszyfrowaneLiteryZWiersza(char macierz[5][5], char litera1, char litera2)
{
    string wynik = "";
    int wierszLitery1 = pobierzIndeksWierszaLitery(macierz, litera1);
    int kolumnaLitery1 = pobierzIndeksKolumnyLitery(macierz, litera1);
    int wierszLitery2 = pobierzIndeksWierszaLitery(macierz, litera2);
    int kolumnaLitery2 = pobierzIndeksKolumnyLitery(macierz, litera2);
    kolumnaLitery1 = kolumnaLitery1 - 1;
    kolumnaLitery2 = kolumnaLitery2 - 1;
    if (kolumnaLitery1 < 0)
    {
        kolumnaLitery1 = 4;
    }
    if (kolumnaLitery2 < 0)
    {
        kolumnaLitery2 = 4;
    }
    wynik = wynik + macierz[wierszLitery1][kolumnaLitery1];
    wynik = wynik + macierz[wierszLitery2][kolumnaLitery2];
    return wynik;
}

string pobierzZaszyfrowaneLiteryZKolumny(char macierz[5][5], char litera1, char litera2)
{
    string wynik = "";
    int wierszLitery1 = pobierzIndeksWierszaLitery(macierz, litera1);
    int kolumnaLitery1 = pobierzIndeksKolumnyLitery(macierz, litera1);
    int wierszLitery2 = pobierzIndeksWierszaLitery(macierz, litera2);
    int kolumnaLitery2 = pobierzIndeksKolumnyLitery(macierz, litera2);
    wierszLitery1 = wierszLitery1 - 1;
    wierszLitery2 = wierszLitery2 - 1;
    if (wierszLitery1 < 0)
    {
        wierszLitery1 = 4;
    }
    if (wierszLitery2 < 0)
    {
        wierszLitery2 = 4;
    }
    wynik = wynik + macierz[wierszLitery1][kolumnaLitery1];
    wynik = wynik + macierz[wierszLitery2][kolumnaLitery2];
    return wynik;
}

string pobierzZaszyfrowaneLiteryZRoznych(char macierz[5][5], char litera1, char litera2)
{
    string wynik = "";
    int wierszLitery1 = pobierzIndeksWierszaLitery(macierz, litera1);
    int kolumnaLitery1 = pobierzIndeksKolumnyLitery(macierz, litera1);
    int wierszLitery2 = pobierzIndeksWierszaLitery(macierz, litera2);
    int kolumnaLitery2 = pobierzIndeksKolumnyLitery(macierz, litera2);
    wynik = wynik + macierz[wierszLitery2][kolumnaLitery1];
    wynik = wynik + macierz[wierszLitery1][kolumnaLitery2];
    return wynik;
}

bool czyLiteraJestWMacierzy(char macierz[5][5], char litera)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (macierz[i][j] == litera)
            {
                return true;
            }
        }
    }
    return false;
}

char pobierzLitereDoMacierzy(char macierz[5][5])
{
    for (char litera = 'A'; litera <= 'Z'; litera++)
    {
        if (czyLiteraJestWMacierzy(macierz, litera) == false && litera != 'J')
        {
            return litera;
        }
    }
    return '0';
}

bool czyLiteraJestWNapisie(string tekst, char szukanaLitera)
{
    for (int i = 0; i < tekst.length(); i++)
    {
        if (tekst[i] == szukanaLitera)
        {
            return true;
        }
        return false;
    }
}

string pobierzTekstBezDuplikatow(string tekst)
{
    string nowyTekst = "";
    for (int i = 0; i < tekst.length(); i++)
    {
        if (czyLiteraJestWNapisie(nowyTekst, tekst[i]) == false)
        {
            nowyTekst = nowyTekst + tekst[i];
        }
    }
    return nowyTekst;
}

string deszyfrowanie(string napis, string klucz)
{
    string szyfrogram = "";
    char macierz[5][5];
    string kluczBezDuplikatow = pobierzTekstBezDuplikatow(klucz);
    int licznikKlucza = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            macierz[i][j] = '0';
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (licznikKlucza < kluczBezDuplikatow.length())
            {
                macierz[i][j] = kluczBezDuplikatow[licznikKlucza];
                licznikKlucza++;
            }
            else
            {
                macierz[i][j] = pobierzLitereDoMacierzy(macierz);
            }
        }
    }

    for (int i = 0; i < napis.length() - 1; i = i + 2)
    {
        if (pobierzIndeksKolumnyLitery(macierz, napis[i]) == pobierzIndeksKolumnyLitery(macierz, napis[i + 1]))
        {
            szyfrogram = szyfrogram + pobierzZaszyfrowaneLiteryZKolumny(macierz, napis[i], napis[i + 1]);
        }
        else if (pobierzIndeksWierszaLitery(macierz, napis[i]) == pobierzIndeksWierszaLitery(macierz, napis[i + 1]))
        {
            szyfrogram = szyfrogram + pobierzZaszyfrowaneLiteryZWiersza(macierz, napis[i], napis[i + 1]);
        }
        else
        {
            szyfrogram = szyfrogram + pobierzZaszyfrowaneLiteryZRoznych(macierz, napis[i], napis[i + 1]);
        }
    }

    if (napis.length() % 2 == 1)
    {
        szyfrogram = szyfrogram + napis[napis.length() - 1];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }
    return szyfrogram;
}

int main()
{
    string napis = "KHRBYRTEMXA";
    string klucz = "TESLA";
    cout << endl;
    cout << deszyfrowanie(napis, klucz) << endl;
    return 0;
}