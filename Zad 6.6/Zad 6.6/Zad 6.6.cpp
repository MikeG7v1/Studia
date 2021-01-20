#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int func(int n)
{
    int z,m,i;
    int tab1[0],tab2[0],tab3[0];
    
    
   
    for(z=0;z<n;z++)//uzupelnienie losowymi wartosciami tablicy 1 
    {
        tab1[z]=rand();
        printf ("%d\n",tab1[z]);//wyswietlenie tablicy 1
    }
    
    for(m=0;m<n;m++)//uzupelnienie losowymi wartosciami tablicy 2
    {
        tab2[m]=rand();
        printf ("%d\n",tab2[m]);//wyswietlenie tablicy 2
    }
    
    for(i=0;i<n;i++)//okreslenie czesci wspolnej tablic 1 i 2 oraz wpisanie ich w tablice 3
    {
        if(tab1[i]==tab2[i])
        {
            tab3[i]=tab1[i];
        }
    }
    printf("czesc wspolna: ");
    for (int m=0;m<i;i++)
       {
       printf("%d",tab3[m]);//wyswietlenie czesci wspolnej tablic 1 i 2
       }
    return 0;
}
int main()
{
    int n;
    srand(time(NULL));
    printf("Podaj rozmiar tablic:");//okreslenie rozmiaru tablic 1 i 2
    scanf("%d",&n);
    
    
    func(n);
    
    return 0;
}
