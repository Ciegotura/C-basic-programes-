#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct punkt{
int x, y;


};
float odleglosc(int x1, int y1,int x2, int y2){

return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
int main()
{
    printf("Obliczmy odleglosc miedzy punktami\n");
    struct punkt A={2,4}, B={6,1};
    float c;
    c=odleglosc(A.x,A.y,B.x,B.y);
    printf("Odleglosc miedzy punktami A x= %d y= %d i B x= %d y= %d wynosi %f",A.x,A.y,B.x,B.y,c);

    return 0;
}
