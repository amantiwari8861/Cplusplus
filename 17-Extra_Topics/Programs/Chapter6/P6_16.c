/*P6.16 Program to understand the use of static variables*/
#include<iostream> using namespace std;
void func(void);
int main(void)
{
	func();
	func();
	func();
	return 0;
}
void func(void)
{
	int a=10;
	static int b=10;
	printf("a=%d, b=%d\n",a,b);
	a++;
	b++;
}