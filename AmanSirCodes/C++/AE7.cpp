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
	//system("cls");
	for(i=0; text[i]!='\0';++i);	
	cout<<endl<<"i :"<<i<<endl;
	
	char reverse[50];
	int k;
	for(j=i-1, k=0; j>=0; --j,++k){
	    reverse[k]=text[j];}
	reverse[k]='\0';
	cout << "The reversed string is: ";
	puts(reverse);
	getch();
}
