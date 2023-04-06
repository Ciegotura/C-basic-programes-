#include <stdio.h>
#include <stdlib.h>

float suma(float a, float b){
return a+b;
}
float odej(float a, float b){
return a-b;
}
float ilocz(float a, float b){
return a*b;
}
float iloraz(float a, float b){
return a/b;
}


int main()
{   printf("Kalkulator\n");

    float a, b,c,cc;
    char u;
mughh:
scanf("%f %c %f",&a,&u,&b);
if(u=='+'){
    c=suma(a,b);
    printf("%f %c %f = %f\n",a,u,b,c);
      printf("_____________________\nzapamientac wynik liczac dalej? 1-tak\n liczyc od nowa 2-tak\nwszystko inne return 0\n");
    scanf("%f",&cc);
    if(cc==1){ a=c;
    goto mugh;
    }
    else if(cc==2){
    goto mughh;
  }
}else if(u=='-'){
    c=odej(a,b);
    printf("%f %c %f = %f\n",a,u,b,c);
      printf("_____________________\nzapamientac wynik liczac dalej? 1-tak\n liczyc od nowa 2-tak\nwszystko inne return 0\n");
    scanf("%f",&cc);
    if(cc==1){ a=c;
    goto mugh;
    }
    else if(cc==2){
    goto mughh;
  }
}else if(u=='x'){
    c=ilocz(a,b);
    printf("%f %c %f = %f\n",a,u,b,c);
      printf("_____________________\nzapamientac wynik liczac dalej? 1-tak\n liczyc od nowa 2-tak\nwszystko inne return 0\n");
    scanf("%f",&cc);
    if(cc==1){ a=c;
    goto mugh;
    }
    else if(cc==2){
    goto mughh;
  }
}else if(u=='/'){
    c=iloraz(a,b);
    printf("%f %c %f = %f\n",a,u,b,c);
      printf("_____________________\nzapamientac wynik liczac dalej? 1-tak\n liczyc od nowa 2-tak\nwszystko inne return 0\n");
    scanf("%f",&cc);
    if(cc==1){ a=c;
    goto mugh;
    }
    else if(cc==2){
    goto mughh;
  }
}
mugh:
    printf("%f",a);
    scanf(" %c %f",&u,&b);
if(u=='+'){
    c=suma(a,b);
    printf("%f %c %f = %f\n",a,u,b,c);
    printf("_____________________\nzapamientac wynik liczac dalej? 1-tak\n liczyc od nowa 2-tak\nwszystko inne return 0\n");
    scanf("%f",&cc);
    if(cc==1){ a=c;
    goto mugh;
    }
    else if(cc==2){
    goto mughh;
  }
}
if(u=='-'){
    c=odej(a,b);
    printf("%f %c %f = %f\n",a,u,b,c);
      printf("_____________________\nzapamientac wynik liczac dalej? 1-tak\n liczyc od nowa 2-tak\nwszystko inne return 0\n");
    scanf("%f",&cc);
    if(cc==1){ a=c;
    goto mugh;
    }
    else if(cc==2){
    goto mughh;
  }
}
if(u=='x'){
    c=ilocz(a,b);

    printf("%f %c %f = %f\n",a,u,b,c);
      printf("_____________________\nzapamientac wynik liczac dalej? 1-tak\n liczyc od nowa 2-tak\nwszystko inne return 0\n");
    scanf("%f",&cc);
    if(cc==1){ a=c;
    goto mugh;
    }
    else if(cc==2){
    goto mughh;
  }
}
if(u=='/'){
    c=iloraz(a,b);
    printf("%f %c %f = %f\n",a,u,b,c);
     printf("_____________________\nzapamientac wynik liczac dalej? 1-tak\n liczyc od nowa 2-tak\nwszystko inne return 0\n");
    scanf("%f",&cc);
    if(cc==1){ a=c;
    goto mugh;
    }
    else if(cc==2){
    goto mughh;
  }
}







    return 0;
}
