// Napisz funkcję rekurencyjną writeLine(), która wypisuje w kółko podany w argumencie znak, tworząc linię złożoną z n znaków.Np. writeLine(“n’,10) powinno zwrócić “nnnnnnnnnn”.

#include <iostream>

using namespace std;

string writeline(char znak, int liczba)
{
    if (liczba > 0)
    {
        return writeline(znak, liczba - 1) + znak;
    }
    return "";
}

int main()
{
    cout << writeline('$', 2);

    return 0;
}