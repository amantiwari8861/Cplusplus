/*E15.17*/
#include<iostream> using namespace std;
#include<stdarg.h>
void func(int n,...);
int main(void)
{
	int count=4;
	func(count,2,3,4,5);
	return 0;
}
void func(int n,...)
{
	va_list ap;
	int a,i;
	for(i=0; i<n; i++)
	{
		a=va_arg(ap,int);
		printf("%d ",a);
	}
}