/*P10.19*/
#include<iostream> using namespace std;
#include<string.h>
int main(void)
{
	char str1[15]="ABC";
	strncat(str1,"DEFGHIJ",4);
	printf("%s\n",str1);
	return 0;
}