// Napisz funkcję, która przyjmuje jako argument wektor stringów. Funkcja ta powinna usunąć wszystkie wystąpienia znaków specjalnych (kropka, przecinek, dwukropek, średnik, wykrzyknik, pytajnik, cudzysłów) i zwrócić zaktualizowany wektor.

#include <iostream>
#include <vector>

using namespace std;

string napisybezznakowspecjalnych(string napis)
{
    string nowynapis = "";

    for (int i = 0; i < napis.length(); i++)
    {
        if (napis[i] != '.' && napis[i] != ',' && napis[i] != ':' && napis[i] != ';' && napis[i] != '!' && napis[i] != '?' && napis[i] != '"')
        {
            nowynapis = nowynapis + napis[i];
        }
    }
    return nowynapis;
}

vector<string> pobierzwekotnapisowbezznakowspecjalnych(vector<string> slowa)
{
    for (int i = 0; i < slowa.size(); i++)
    {
        slowa[i] = napisybezznakowspecjalnych(slowa[i]);
    }
    return slowa;
}

int main()
{
    vector<string> slowa = {"kasia.", "banan!", "kaczka;", "parasol?"};

    vector<string> zaktualizowaneslowa = pobierzwekotnapisowbezznakowspecjalnych(slowa);

    for (int i = 0; i < zaktualizowaneslowa.size(); i++)
    {
        cout << zaktualizowaneslowa[i] << endl;
    }

    return 0;
}