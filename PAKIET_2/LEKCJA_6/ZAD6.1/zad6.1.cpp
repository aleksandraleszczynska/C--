// Palindrom
// Palindromem nazywamy słowo, które czytane od lewej i od prawej strony jest takie samo.
// Na przykład palindromami są słowa: JABFDFBAJ HAJAHAJAH ABBA. Słowo JANA nie jest palindromem.
// W pliku dane.txt umieszczono w kolejnych wierszach 1000 słów o długościach od 2 do 25 znaków, składających się z wielkich liter A, B, C, D, E, F, G, H, I, J.
// Napisz program, który przegląda słowa zapisane w pliku dane.txt i wypisuje te z nich, które są palindromami - po jednym w wierszu. Kolejność wypisywania palindromów powinna być taka sama, jak w pliku z danymi. Wyniki zapisz w pliku zadanie4.txt.

#include <iostream> 
#include <fstream>

using namespace std;

bool CzyJestPalindromem (string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] != word[word.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    fstream file;
    ofstream zapis;
    file.open("dane.txt");
    zapis.open("zadanie4.txt");
    string line;

    while(!file.eof())
    {
        file >> line;

        if(CzyJestPalindromem(line) == true)
        {
            zapis << line << endl;
        }

    }
    zapis.close();
    return 0;
}