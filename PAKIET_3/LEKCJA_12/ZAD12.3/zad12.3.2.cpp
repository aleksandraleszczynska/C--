#include <iostream>

using namespace std;

void quicksort(int tab[], int left, int right){
     int i=left;
     int j=right;
     int x=tab[(left+right)>>1];
     do{
         while(tab[i]<x) i++;
         while(tab[j]>x) j--;
         if(i<=j){                  
             int temp=tab[i];
             tab[i]=tab[j];
             tab[j]=temp;
             i++;
             j--;
         }
     }while(i<=j);
     if(left<j) quicksort(tab,left,j);
     if(right>i) quicksort(tab,i,right);     
}

int main()
{
    int tablica[5] = {3, 6, 2,1,4};
    int lewy = 0;
    int prawy = 4;
    quicksort(tablica, lewy, prawy);

    for (int i = 0; i < 5; i++)
    {
        cout << tablica[i] << " ";
    }

    return 0;
}