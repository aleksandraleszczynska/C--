// Napisz program, który sprawdza czy wyrazy są anagramami, za pomocą sortowania bąbelkowego.

#include <iostream>
using namespace std;

string SortowanieSlowa(string slowo)
{
    int dlugosc = slowo.length();

    for (int j = 0; j < dlugosc - 1; j++)
    {
        for (int i = 0; i < dlugosc - 1; i++)
        {
            if (slowo[i] < slowo[i + 1])
            {
                int temp = slowo[i];
                slowo[i] = slowo[i + 1];
                slowo[i + 1] = temp;
            }
        }
    }

    return slowo;
}

bool CzyWyrazySaAnagramami(string slowo1, string slowo2)
{
    return SortowanieSlowa(slowo1) == SortowanieSlowa(slowo2);
}

int main()
{
    cout << CzyWyrazySaAnagramami("ABLNMK", "LABKNM");
    return 0;
}