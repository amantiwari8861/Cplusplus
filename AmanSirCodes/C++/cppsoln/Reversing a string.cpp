#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	//clrscr();
	char text[50];
	int i,j;
	cout << " Enter Text (max 50 characters) : \n";
	gets(text);
	
	for(i=0; text[i]!='\0';++i);
	
	char reverse[50];
	int k;
	for(j=i-1, k=0; j>=0; --j,++k)
	    reverse[k]=text[j];
	reverse[k]='\0';
	cout << "The reversed string is: ";
	puts(reverse);
	cout<<sizeof(text);
	getch();
}
