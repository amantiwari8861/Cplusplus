/*E4.14*/
#include<iostream> using namespace std;
int main(void)
{
	int a=5,b=10,temp;
	temp=a,a=b,b=temp;
	printf("a=%d, b=%d\n",a,b);
	return 0;
}