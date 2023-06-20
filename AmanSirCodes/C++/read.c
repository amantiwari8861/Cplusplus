#include<stdio.h>

void main()
{
	FILE *ptr;
	ptr=fopen("3.txt","r+");
	int sum=0,temp=0;
	int ch[100];
	
	while(1)
	{
	ch[100]=fgetc(ptr);
	if(ch[100]==EOF)
	{
		break;
	}

	
		//printf("the ASCII value of %c\n",ch[100]);
		sum=ch[100]+sum;
	
	}
	printf("%d",sum);
}