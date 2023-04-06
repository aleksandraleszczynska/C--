// Napisz program,który wypisze na ekranie wszystkie liczby nieparzyste od -10 do 40 za pomocą pętli for.

#include <iostream>

using namespace std;

int main()

{
    for (int i = -10; i <= 40; i++)
    {
        if (i % 2 != 0)

        {
            cout << i << endl;
        }
    }

    return 0;
}
