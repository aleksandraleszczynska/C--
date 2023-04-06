// Napisz program, który oblicza n-ty wyraz ciągu arytmetycznego oraz oblicza sumę n-początkowych wyrazów tego ciągu.

#include <iostream>

using namespace std;

int main()

{
    cout << "Podaj pierwszy wyraz ciagu arytmetycznego" << endl;
    int a1;
    cin >> a1;

    cout << "Podaj roznice ciagu arytmetycznego" << endl;
    int r;
    cin >> r;

    cout << "Poadj ktory wyraz ciagu chcesz znalezc" << endl;
    int n;
    cin >> n;

    int an = a1 + (n - 1) * r;

    cout << "n-ty wyraz ciagu jest rowny: " << an << endl;
    cout << "Suma " << n << " pierwszych wyrazow ciagu jest rowna: " << (an + a1) / 2 * n << endl;

    return 0;
}
