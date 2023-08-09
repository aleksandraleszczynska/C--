// Napisz program, który deszyfruje tekst za pomocą alfabetu morse’a.

#include <iostream>
using namespace std;

string deszyfrowanie(string napis)
{
    string tekstjawny = "";
    string tablica[26] = {"*-", "-***", "-*-*", "-**", "*", "**-*", "--*", "****", "**", "*---", "-*-", "*-**", "--", "-*", "---", "*--*", "--*-", "*-*", "***", "-", "**-", "***-", "*--", "-**-", "-*--", "--**"};

    int granica = 0;

    while (granica < napis.length())
    {
        {
            string literawmorsie = "";

            while (granica < napis.length() && napis[granica] != ' ')
            {
                literawmorsie = literawmorsie + napis[granica];
                granica++;
            }
            if (napis[granica] == ' ')
            {
                granica++;
            }

            for (int j = 0; j < 26; j++)
            {
                if (literawmorsie == tablica[j])
                {
                    tekstjawny = tekstjawny + char(j + 65);
                    break;
                }
            }
        }
    }

    return tekstjawny;
}

int main()
{
    string napis = "-*- --- -";
    cout << deszyfrowanie(napis);
    return 0;
}