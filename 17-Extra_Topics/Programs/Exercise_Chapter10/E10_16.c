/*E10.16*/
#include<iostream> using namespace std;
#include<string.h>
int main(void)
{
	char str1[]="deep";
	char str2[]={'d','e','e','p'};
	if(strcmp(str1,str2)==0)
		printf("Same\n");
	else
		printf("Different\n");
	return 0;
}