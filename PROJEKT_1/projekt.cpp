#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("baza_tkanin.txt");

    cout << "SKLEP Z TKANINAMI" << endl;
    cout << "***********************" << endl;

    return 0;
}