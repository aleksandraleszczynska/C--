// Napisz program,który wypisze na ekranie wszystkie liczby nieparzyste od -10 do 40 za pomocą pętli while.

#include <iostream>

using namespace std;

int main()

{
    int i = -10;

    while (i <= 40)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
