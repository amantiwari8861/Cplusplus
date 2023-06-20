// Program to convert case,
/*function to convert a string to lower-case*/
#include<stdio.h>
#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	char in_str[101];
	int i=0;
	printf("Enter a string (upto 100 characters)\n");
	gets(in_str);
	while(in_str[i]!='\0')
	{
	   if(in_str[i]>='A' && in_str[i]<'Z')     /*check for upper-case letters*/
	      in_str[i]=in_str[i]+32;
	   i=i+1;
	}
	cout<<"The converted string is "<< in_str;
	getch();
}
