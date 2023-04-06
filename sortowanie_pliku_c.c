#include <stdio.h>
#include <stdlib.h>







int main()
{
   FILE *f;

   f=fopen("dane.txt","r");
   int tab[100], n=0,i=1, s=0,zamian, tmp;

   do{
   fscanf(f,"%d",&tab[n++]);
   s++;
   }while(!feof(f));
   for(i;i<s;i++){
   // printf("Nieposortowane:\n");
    printf("%d  ",tab[i-1]);


}

do{
zamian=0;
for(i=1;i<s;i++)
if(tab[i]<tab[i-1])
{
tmp=tab[i];
tab[i]=tab[i-1];
tab[i-1]=tmp;
zamian++;}
}
while(zamian!=0);
printf("\n ciag posegregowany rosnaco \n");
for(i=1;i<s;i++)
printf("%4d", tab[i-1]);
printf("\n");


do{
        zamian=0;
for(i=1;i<s;i++){
    if(tab[i]>tab[i-1]){
        tmp=tab[i];
        tab[i]=tab[i-1];
        tab[i-1]=tmp;
        zamian++;
    }

}

}while(zamian!=0);

printf("\n ciag posortowany malejaco\n");
for(i=1;i<s;i++){
    printf("%d ",tab[i]);

}
//printf("      %d",tab[10]);
    fclose(f);
    return 0;
}
