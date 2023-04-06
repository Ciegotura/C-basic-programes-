#include <stdio.h>
#include <stdlib.h>

int main()
{
int c=0;
int d=0;

    char tab[14]={'a','l','a',' ','m','a',' ','k','o','t','a'};



    for(int i=0;i<=10;i++){



if(tab[i]==' '){
        if(i%2==c){
    printf("%c\n",tab[i]);
    d=d+1;}



}


if(i%2==c){
tab[i+d]=toupper(tab[i+d]);
printf("%c\n",tab[i+d]);
}else printf("%c\n",tab[i+d]);


    }

    return 0;
}
