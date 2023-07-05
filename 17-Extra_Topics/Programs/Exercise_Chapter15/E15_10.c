/*E15.10*/
#include<iostream> using namespace std;
#include<stdlib.h>
int *func(void);
int main(void)
{
	const int *ptr=func();
	*ptr=7;
	printf("*ptr=%d",*ptr);
	return 0;
}
int *func(void)
{
	int *p=(int *)malloc(sizeof(int)); 
	return p;
}