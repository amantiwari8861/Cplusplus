/*E10.30*/
#include<iostream> using namespace std;
#include<string.h>
int main(void)
{
	char *p, str[100]="		main()";
	strcpy(str, str+strspn(str, " \t"));
	puts(str);
	return 0;
}