//Counting vowels in a line of text

#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void main()
{
 clrscr();
 char text[50];
 int vowels=0;
 cout<< "Enter text: \n";
 gets(text);
   for(int j=0; text[j]!='\0';j++)
   {
 switch(text[j])
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U': vowels++;
}
 }
 cout<<"\n The number of vowels in the entered text is :"<<vowels;
 getch();
}
