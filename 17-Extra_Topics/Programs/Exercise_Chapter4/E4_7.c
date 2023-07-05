/*E4.7*/
#include<iostream> using namespace std;
int main(void)
{
	int a=4, b=8, c=3, d=9, z;
	z = a++ + ++b * c-- - --d;
	printf("a=%d, b=%d, c=%d, d=%d, z=%d\n",a,b,c,d,z);
	return 0;
}