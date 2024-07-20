#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dzielnik = 2;
    while(n>1)
    {
        if(n%dzielnik == 0)
        {
            n = n/dzielnik;
            cout << dzielnik << ", ";
        }
        else
        {
            dzielnik++;
        }
    }
    return 0;
}