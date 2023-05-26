#include<stdio.h>

void add()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d\n",c);
}

int main()
{
    add();
    return 0;
}
