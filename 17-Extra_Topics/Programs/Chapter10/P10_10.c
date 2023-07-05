/*P10.10*/
#include<iostream> using namespace std;
#include<stdlib.h>
int main(void)
{
	char *str;
	str=(char *)malloc(10);
	printf("Enter a string : ");
	scanf("%s",str);
	printf("String is : %s\n",str);
	return 0;
}
