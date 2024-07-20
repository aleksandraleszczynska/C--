#include <iostream>
using namespace std;

string szyfrowanie(string slowo)
{
    for (int i = 0; i < slowo.length() - 1; i += 2)
    {
        swap(slowo[i], slowo[i + 1]);
    }
    return slowo;
}

int main()
{
    string slowo;
    cin >> slowo;
    cout << szyfrowanie(slowo);
    return 0;
}
