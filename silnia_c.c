#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("podaj silnie\n");
    int a, s;
    s=1;
  //  a=4;
    FILE *g;
printf("wpisz dowoln¹ litere by obliczyc sinlie z wartosci wywolanej prez program");
    scanf("%d",&a);
    g=fopen("wynik.txt","w");
    for(int i=1;i<=a;i++){
        s*=a;



    }
     printf("silnia z %d wynosi %d",a,s);

    fprintf(g,"Wynik silni z %d = %d",a,s);


    fclose(g);


    return 0;
}
