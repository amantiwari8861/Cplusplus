/*P8.15 Program for input and output of strings using gets() and puts()*/
#include<iostream> using namespace std;
int main(void)
{
	char str[10];
	printf("Enter a string  : "); 
	gets(str);
	printf("String is : ");
	puts(str);
	return 0;
}