/*E10.4*/
#include<iostream> using namespace std;
#include<string.h>
int main(void)
{
	char str[10]="How";
	strcat(str,'?');
	printf("%s\n",str);
	return 0;
}