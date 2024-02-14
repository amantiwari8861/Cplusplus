// The general form of Geometric Progression is:
//     a, ar, ar^2, ar^3, ar^4,…, ar^n-1
//     Where,
//     a = First term
//     r = common ratio
//     ar^n-1 = nth term
//     2 4 6 . . ..  

#include<iostream> 
using namespace std;
#include<math.h>
void printGP(float i,float a,float r,float n)
{
    if (i!=n)//base condition
    {
        printf(" %.0f ",a*pow(r,i));
        printGP(i+1,a,r,n);
    }
}
int main()
{
    float a,r,n,i=0;
    printf("Enter a r and n :\n");
    scanf("%f%f%f",&a,&r,&n);
    printGP(i,a,r,n);
    return 0;
}
