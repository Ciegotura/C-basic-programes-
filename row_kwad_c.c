#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE *f, *g;
    int a,b,c;
    float delta, x0, x1, x2;
    f=fopen("dane.txt","r");
    g=fopen("wyniki.txt","w");
    do{

        fscanf(f,"%d%d%d",&a,&b,&c);

        printf("%d %d %d\n",a,b,c);
        delta = b*b-(4*a*c);
        printf("Delta wynosi %f\n",delta);
        if(delta>0){
            x1=((-b)-sqrt(delta))/(2*a);
               x2=((-b)+sqrt(delta))/(2*a);
printf("x1= %f x2= %f\n",x1,x2);
fprintf(g,"x1 = %f x2= %f\n",x1,x2);
}
if(delta==0){
    x0=(-b)/(2*a);
    printf("x0= %f",x0);
    fprintf(g,"x0 = %f\n",x0);

}
if(delta<0){
    printf("brak rozw rzeczywistych\n");
fprintf(g,"brak rozw rzeczywistych\n");

}



    }while(!feof(f));


    fclose(f);
    fclose(g);

    return 0;
}
