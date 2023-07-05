/*P10.20*/
#include<iostream> using namespace std;
#include<string.h>
int main(void)
{
	if(strncmp("Deepali","Deepanjali",4)==0)
		printf("Same\n");
	else
		printf("Different\n");
	return 0;
}