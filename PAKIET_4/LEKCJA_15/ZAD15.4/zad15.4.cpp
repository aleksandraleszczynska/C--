// //Zrealizuj program szyfrujący następującego szyfru przestawieniowego.
// Tekst jawny wpisujemy w macierz - wierszami. Zaszyfrowany tekst odczytujemy kolumnami. Klucz jest dwucyfrowy. Pierwsza cyfra oznacza liczbę kolumn, a druga oznacza przesunięcie. Dla napisu "ALA MA KOTA" oraz klucza 32, macierz powinna mieć postać:
// przed przesunięciem:
// A L A
// M A K
// O T A
// po przesunięciu:
// L A A
// A K M
// T A O
// szyfr: LATAKAAMO
// Użytkownik zamierza szyfrować pełne zdania (bez polskich znaków). Zadbaj o to, żeby pozbyć się spacji między słowami i w wyniku szyfrowania wyświetlić tekst bez spacji.

#include <iostream>
using namespace std;

string szyfrowaie(string zdanie, int klucz)
{
	string zdaniebezspacji = "";
	int licznik = 0;

	for (int i = 0; i < zdanie.length(); i++)
	{
		if (zdanie[licznik] != ' ')
		{
			zdaniebezspacji = zdaniebezspacji + zdanie[licznik];
			licznik++;
		}
		else
		{
			licznik++;
		}
	}

	int kolumny = klucz / 10;
	int wiersze = zdaniebezspacji.length() / kolumny;
	int przesuniecie = klucz % 10;
	string szyfrogram = "";
	char macierz[wiersze][kolumny];

	licznik = 0;

	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			macierz[i][j] = zdaniebezspacji[licznik];
			licznik++;
		}
	}

	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			cout << macierz[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	char macierz2[wiersze][kolumny];

	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			if (j - przesuniecie < 0)
			{
				macierz2[i][j] = macierz[i][kolumny - przesuniecie + j];
			}
			else
			{
				macierz2[i][j] = macierz[i][j - przesuniecie];
			}
		}
	}

	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			cout << macierz2[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			szyfrogram = szyfrogram + macierz2[j][i];
		}
	}

	return szyfrogram;
}

int main()
{
	string zdanie = "ALA MA KOTA";
	int klucz = 32;
	cout << szyfrowaie(zdanie, klucz);
	return 0;
}