#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float trojk(float a, float h){


return (a*h)/2.0;
}

int losowy_troj(int a, int b){
srand(time(0)); int c,d;
c=(rand()%(a-b))+1;
d=(rand()%(a-b))+1;
printf("losowa podstawa %d, losowa wysokosc %d",c,d);
return (c*d)/2;
}



int main()
{    float a,h,i;
printf("Program liczy pole trojkonta\n Menu\ 1-licze pole trojkonta\n2 pole trojkonta z liczb losowych\n 3 koniec programu\n inna liczba konczy dzialanie programu\n________________________________\n");
    FILE *f;
    f=fopen("Wyniki.txt","w");
    int b,y;


  do{ scanf("%d",&b);
  printf("Program liczy pole trojkonta\n Menu\ 1-licze pole trojkonta\n2 pole trojkonta z liczb losowych\n 3 koniec programu\n inna liczba konczy dzialanie programu\n__________________________________\n");
   switch(b){
   case 1:
    printf("Podaj a i H\n");
    scanf("%f%f",&a,&h);
   if(a>0&&b>0){i=trojk(a,h);
printf("pole jest rowne %f",i);
fprintf(f,"Pole trojkonta o podstawie %f i wysokosci %f wynosi %f",a,h,i);}else printf("zle dane\n");
break;
case 2: printf("podaj przedzial losowych liczb max, min\n");
int max, min, u;
scanf("%d%d",&max,&min);
if(max>0&&min>=0){u=losowy_troj(max,min);
printf("Pole trojkata z liczb losowych %d",u);
fprintf(f,"Pole trojkata z losowego przedzialu max %d min %d jest rowne %d",max,min,u);}else printf("zle dane\n");
case 3: return 0;

default: printf("Koniec programu"); break;

  }
  printf("Liczyc dalej 1-tak, reszta koniec\n");
scanf("%d",&y);

   }while(y==1);

    fclose(f);
    return 0;
}
