// Napisz program, który wypisze liczby od 1 do 100. W środku pętli umieść warunek, że jeśli iterator będzie równy 23, opuść pętlę za pomocą instrukcji break.

#include <iostream>

using namespace std;

int main()

{
    for (int i = 1; i <= 100; i++)
    {
        if (i == 23)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}
