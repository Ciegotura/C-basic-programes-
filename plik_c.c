#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    FILE *f, *g;

    f=fopen("dane.txt","r");
    g=fopen("wyniki.txt","w");


    do{
    fscanf(f,"%d%d%d",&a,&b,&c);

    printf("%d,%d,%d\n",a,b,c);


    fprintf(g,"%d,%d,%d",a,b,c);

    }while(!feof(f));

    fclose(f);
    fclose(g);

    return 0;
}
