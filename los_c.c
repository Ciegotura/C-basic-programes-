#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define nowy_strzal strzal=(max+min)/2;

int main()
{
   int min=0, max=2000, liczba, strzal;
   srand(time(0));
   liczba=rand()%(max-min)+1;
   printf("Losowa liczba to %d",liczba);
strzal=(max-min)/2;


do{
        if(strzal>liczba){max=strzal;}else min=strzal;

nowy_strzal;
if(strzal==liczba){printf("Gratulacjum to ta liczba %d\n", strzal);} else printf("nie to nie ta liczba %d\n",strzal);
}while(strzal!=liczba);
    return 0;
}
