#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void func(int n,int tab [],int a, int b)//funkcja wykonujaca zadanie opisane w poleceniu
{
    int l;
    l=b-a;
    srand(time(NULL));
    for(int z=0;z<n;z++)//petla umieszczajaca losowe wartosci w tablicy i wyswietlajaca je na ekranie
    {
        tab[z]=rand()%l+a;
        printf("%d\n",tab[z]);
    }
}
int main()// funkcja nadajaca parametry a b oraz n
{
    int a,b,n;
    printf("Podaj rozmiar tablicy:");
    scanf("%d",&n);
    printf("Podaj dolną granicę przedziału (a):");
    scanf("%d",&a);
    printf("Podaj górną granicę przedziału (a):");
    scanf("%d",&b);
    int tab[n];
    func(n,tab,a,b);

    return 0;
}
