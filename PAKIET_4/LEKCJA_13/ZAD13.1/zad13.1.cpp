// Przedstaw swój pomysł na algorytm szyfrujący jakiś tekst. Za pomocą opisu lub kodu 😉 Musi być możliwość sprawdzenia, czy tekst pasuje do szyfrogramu.

// Algorytm szyfrujący podmienia co drugą literę z tej samej pozycji od początku i końca wyrazu.

#include <iostream>
using namespace std;

string szyfrowanie(string napis)
{
    for (int i = 0; i < napis.length() / 2; i = i + 2)
    {
        char temp = napis[i];
        napis[i] = napis[napis.length() - 1 - i];
        napis[napis.length() - 1 - i] = temp;
    }
    return napis;
}

int main()
{
    string tekst;
    cin >> tekst;
    cout << szyfrowanie(tekst);
    return 0;
}
