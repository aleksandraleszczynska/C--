// Napisz program, który wypisuje na ekran wszystkie litery alfabetu małe i duże. Za pomocą pętli.

#include <iostream>

using namespace std;

int main()

{
    for (int i = 65; i <= 90; i++)
    {
        char j = i;
        cout << j << endl;
    }

    for (int i = 97; i <= 122; i++)
    {
        char j = i;
        cout << j << endl;
    }

    return 0;
}