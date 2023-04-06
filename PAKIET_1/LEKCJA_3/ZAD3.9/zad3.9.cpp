// Napisz program, który poprosi użytkownika o podanie napisu, następnie wypisze ile razy i jakie znaki zostały użyte przez użytkownika

#include <iostream>

using namespace std;

int main()
{
    string napis;

    cout << "Podaj napis: " << endl;

    getline(cin, napis);

    int licznik[122] = {0};

    int dlugosc = napis.length();

    for (int i = 0; i < dlugosc; i++)
    {
        int znak = (int)napis[i];
        licznik[znak]++;
    }

    for (int i = 65; i < 97; i++)
    {
        if (licznik[i] != 0)
        {
            licznik[i + 32]++;
        }
    }

    for (int i = 97; i < 122; i++)
    {
        if (licznik[i] > 0)
        {
            cout << (char)i << " - " << licznik[i] << " razy" << endl;
        }
    }

    return 0;
}
