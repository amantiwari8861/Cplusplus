/*E10.17*/
#include<iostream> using namespace std;
#include<string.h>
int main(void)
{
	char str1[]="Parul",str2[]="Devanshi";
	if(strlen(str1)-strlen(str2) >=0 )
		puts(str1);
	else
		puts(str2);
	return 0;
}