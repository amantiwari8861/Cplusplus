/*E13_22*/
#include<iostream> using namespace std;
#define toupper(c)\
	((c)>='a' && (c)<='z' ? (c) +('A'-'a'):(c))

int main(void)
{
	char str[] = "Devanshi", *p;
	p=str;
	while(*p!='\0')
		printf("%c",*p++);
	printf("\n");
	p=str;
	while(*p!='\0')
		printf("%c",toupper(*p++));
	return 0;
}