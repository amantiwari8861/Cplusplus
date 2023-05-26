//Reversing a string
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	//clrscr();
	system("cls");
	char text[50];
	int i,j;
	cout << " Enter Text (max 50 characters) : \n";
	gets(text);
	system("cls");
	for(i=0; text[i]!='\0';++i);	//finding length of text
	
	
	char reverse[50];
	int k=0;
	for(j=i-1; j>=0; --j)
	{
		reverse[k]=text[j];
		++k;
	}
	reverse[k]='\0';
	cout << "The reversed string is: ";
	puts(reverse);
	getch();
}
