/*E7.3*/
#include<iostream> using namespace std;
int func(int a);
int func1(int a);
int main(void)
{
	printf("%d\n",func(6));
	printf("%d\n",func1(6));
	return 0;
}
int func(int a)
{
	if(a==10)
		return a;
	return a + func(a+1);
}
int func1(int a)
{
	if(a==0)
		return a;
	return a + func1(a+1);
}