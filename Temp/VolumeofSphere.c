#include<stdio.h>
int main()
{
    //volume of sphere = 4/3 * pi * r * r * r
    float pi=3.14,r,result;
    printf("radius ki value daalo:");
    scanf("%f",&r);
    result= 4.0/3.0*pi*r*r*r;
    printf("the voluume of sphere is :%f",result);
    return 0;
}