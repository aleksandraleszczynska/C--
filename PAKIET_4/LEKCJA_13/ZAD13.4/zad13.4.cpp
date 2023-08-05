// Napisz program, który szyfruje tekst za pomocą poznanego szyfru przestawieniowego.

#include <iostream>
using namespace std;

string szyfrowanie(string napis)
{
    for (int i = 0; i < napis.length() - 1; i = i + 2)
    {
        char temp = napis[i];
        napis[i] = napis[i + 1];
        napis[i + 1] = temp;
    }
    return napis;
}

int main()
{
    string napis = "ABABABAB";
    cout << szyfrowanie(napis);
    return 0;
}