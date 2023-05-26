#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *ptr1,*ptr2;
ptr1=fopen("1.txt","r");
ptr2=fopen("2.txt","w");
char arr[100];
char ch;

	while(1)
 {
	ch=fgetc(ptr1);
	if(ch==EOF)
	{
		break;
	}
	else
	{
		printf("%c",ch);
	}
 }
	printf("\n");
	fclose(ptr1);
	if(ptr2==NULL)
	{
		printf("unable to find file");
		exit(1);
	}
	printf("enter the sentence:\n");
	gets(arr);
	fprintf(ptr2,"%s",arr);
	fclose(ptr2);
}