/*P15.3*/
#include<iostream> using namespace std;
void func(void);
int main(void)
{
	int x=5;
	printf("x=%d\t",x);
	func();
	return 0;
}
void func(void)
{
	int x=15;
	printf("x=%d\n",x);
}