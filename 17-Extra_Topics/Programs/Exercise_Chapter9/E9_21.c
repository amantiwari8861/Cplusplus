/*E9.21*/
#include<iostream> using namespace std;
void func(int **pp);
int main(void)
{
	int *ptr;
	func(&ptr);
	printf("%d\n",*ptr);
	return 0;
}
void func(int **pp)
{
	int num=10;
	*pp=&num;
}
