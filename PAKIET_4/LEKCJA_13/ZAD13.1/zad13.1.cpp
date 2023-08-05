//Przedstaw swój pomysł na algorytm szyfrujący jakiś tekst. Za pomocą opisu lub kodu 😉 Musi być możliwość sprawdzenia, czy tekst pasuje do szyfrogramu.

//Algorytm szyfrujący podmienia co drugą literę z tej samej pozycji od początku i końca wyrazu.

#include <iostream>
using namespace std;

string szyfrowanie(string napis)
{
    string szyfrogram = "";

    for(int i = 0; i < napis.length()/2; i = i+2)
    {
        int temp = napis[i]; 
        szyfrogram[i] = napis[napis.length() -1 -i];
        szyfrogram[napis.length() - 1 - i] = temp;
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
