// Napisz pętle, która wyświetli kolejne wyrazy ciągu 1,2,4,8,16,32,64 itd. Wszystkie mniejsze niż 1000.

#include <iostream>

using namespace std;

int main()

{
    for (int i = 1; i < 1000; i = i * 2)

    {
        cout << i << endl;
    }
    return 0;
}
