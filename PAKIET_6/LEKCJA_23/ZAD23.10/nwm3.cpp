// fibbonacci iteracyjnie matura 2012
#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int Fi = 1;
    int Fi_1 = 1;
    int i = 2;
    int pom;
    while (i < k)
    {
        pom = Fi;
        Fi = Fi + Fi_1;
        Fi_1 = pom;
        i++;
    }
    if (k == 1 || k == 2)
    {
        cout << 1;
    }
    if (k > 2 && k % 2 == 0)
    {
        cout << Fi;
    }
    if (k > 2 && k % 2 != 0)
    {
        cout << Fi - 1;
    }
    return 0;
}