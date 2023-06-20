#include<stdio.h>

void main()
{
	int i,num,temp=0, sum=1;
	
	printf("enter the no. of series\n");
	scanf("%d",&num);
	
	 for(i=0;i<=num;i++)
	 {
		printf("0");
		 temp=temp+sum;
		printf("+%d ",temp);
	 }
	
}