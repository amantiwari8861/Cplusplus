/*P10.2 Program to print the address and characters of a string using pointer*/
#include<iostream> using namespace std;
int main(void)
{
	char str[]="India";
	char *p;
	p=str;
	while(*p!='\0')
	{
		printf("Character = %c\t",*p);
		printf("Address = %p\n",p);
		p++;
	}
	return 0;
}
