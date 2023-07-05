/*E10.31*/
#include<iostream> using namespace std;
#include<ctype.h>
char *str_upper(char *str);
int main(void)
{
	char str[50];
	printf("Enter a string  : ");
	gets(str);
	puts(str_upper(str));
	return 0;
}
char *str_upper(char *str)
{
	char *s=str;
	while(*s!='\0')
	{
		*s=toupper(*s);
		s++;
	}
	return str;
}