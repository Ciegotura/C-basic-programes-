#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, min, max;



    FILE *d;
    d=fopen("dabe.txt","r");
    fscanf(d,"%d",&x);
    min=x;
    max=x;

    do{
        fscanf(d,"%d",&x);
       // printf("%d\n",x);

if(x<min){ min=x;}
if(x>max){ max=x;}

    }while(!feof(d));
printf("%d\n",max);
printf("%d\n",min);

    fclose(d);
    return 0;
}
