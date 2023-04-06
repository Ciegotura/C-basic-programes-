#include<stdio.h>
#include<math.h>

int punkt_okrag(float xp, float yp, float xo, float yo, float r){

struct punkt{

 float x, y;
};
struct okrag{

  float x, y, r;
};
struct punkt A;
struct okrag S;
A.x = xp;
A.y = yp;
S.x = xo;
S.y = yo;
S.r = r;
float odl = sqrt((A.x-S.x)*(A.x-S.x)+(A.y-S.y)*(A.y-S.y));
if (odl<S.r) return 0;
else
{
if (odl==S.r) return 1;
else return 2;
}
}

main()
{
float xp,yp,xo,yo,r;
printf("Podaj wspolrzedne punktu A\n");
scanf("%f %f",&xp,&yp);
printf("Podaj wspolrzedne srodka okregu i jego promien: \n");
scanf("%f %f %f",&xo,&yo,&r);
switch (punkt_okrag(xp, yp, xo, yo, r))
{
case 0: printf("Punkt A lezy wewnatrz okregu\n");
break;
case 1: printf("Punkt A lezy na okregu\n");
break;
case 2: printf("Punkt A lezy poza okregiem\n");
break;
}
return 0;
}
