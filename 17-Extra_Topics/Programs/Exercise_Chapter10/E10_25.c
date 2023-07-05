/*E10.25*/
#include<iostream> using namespace std;
void func(char *p);
int main(void)
{
	char *str="tap";
	func(str);
	return 0;
}
void func(char *p)
{
	if(*p)
	{
		func(p+1);
		printf("%c",*p++);
	}
}