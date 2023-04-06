#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int suma(int b[10], int n){
int sum=0, c=1;

for(c;c<=n;c++){
    sum+= b[c-1];
   // printf("sum %d elementow = %d",c,sum);


}

return (sum);
}

float srednia_aryt(int b[10], int n){
float sred=0; int c=1;

for(c;c<=n;c++){

    sred+=b[c-1];

}


return (sred)/n;
}

float srednia_geo(int b[10], int n){
float sred=1; int c=1;

for(c;c<=n;c++){
    sred*=b[c-1];


}
float sredd;
sredd= pow(sred,1.0/n);


return sredd;
}


int main()
{
    int tab[20], n=0,s=0;
    FILE *f;
    f=fopen("dane.txt","r");
    if(f==NULL){
        printf("blond odczytu\n");
    }
do{
     fscanf(f,"%d",&tab[n++]);
s++;
}while(!feof(f));
int c=1;
    for(c;c<=s;c++){printf("%d\n",tab[c-1]);
    }
    //printf("s = %d\n",s);
    int o;
    o=suma(tab,s);
    printf("wynik sumy= %d\n",o);
    float oo;
    oo=srednia_aryt(tab,s);
    printf("srednia wartosc= %f\n",oo);
    float ooo=srednia_geo(tab,(float)s);
    printf("srednia geomatryczna= %f\n",ooo);
float ff;
 /* float cc, to, too;
  to=1;
  too=3;
cc= to/too;        //1.0/3.0;
printf("zmienna %f\n",cc);
ff=pow(27,cc);
printf("_____ %f _____ \n",ff);*/


    fclose(f);

    return 0;
}
