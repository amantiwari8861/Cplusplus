#include<iostream> using namespace std;
int main()
{
    int num,count;
    printf("enter the number : ");
    scanf("%d",&num);

    for(count=0;num >0; num=num/10)
    {
        count ++; 
    }
    printf(" total digit :%d ",count);
    return 0;
}