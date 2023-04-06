// Napisz program pytający użytkownika jaki jest dzień tygodnia. Następnie jeśli jest to weekend, wyświetl text “MAM WOLNE”, jeśli jest to dzień roboczy wyświetl “DO PRACY”.
// Pozostawiam Ci dowolność we wczytaniu danych. Możesz to zrobić za pomocą konsolowego menu lub innego preferowanego sposobu. Najważniejsze, żeby użytkownik, który uruchomił program, wiedział co ma wpisać/zrobić.

#include <iostream>

using namespace std;

int main()

{
    int day;
    cout << "Podaj numer dzisiejszego dnia tygodnia (pon-1, wt-2, sr-3, czw-4, pt-5, sob-6, nd-7)" << endl;
    cin >> day;

    if (day == 1 || day == 2 || day == 3 || day == 4 || day == 5)
    {
        cout << "DO PRACY" << endl;
    }
    if (day == 6 || day == 7)
    {
        cout << "MAM WOLNE" << endl;
    }

    return 0;
}
