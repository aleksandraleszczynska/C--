//Napisz program, który szyfruje tekst za pomocą alfabetu morse’a.

#include <iostream>
using namespace std;

string szyfrowanie(string napis)
{
    string szyfrogram = "";
    string tablica[26] = {"*-", "-***", "-*-*", "-**", "*", "**-*", "--*", "****", "**", "*---", "-*-", "*-**", "--", "-*", "---", "*--*", "--*-", "*-*", "***", "-", "**-", "***-", "*--", "-**-", "-*--", "--**"};
    for (int i = 0; i < napis.length(); i++)
    {
       int indexmors = napis[i] - 65;
       szyfrogram = szyfrogram + tablica[indexmors] + " "; 
    }
    return szyfrogram;
}

int main()
{
    string napis = "KOT";
    cout << szyfrowanie(napis);
    return 0;
}
