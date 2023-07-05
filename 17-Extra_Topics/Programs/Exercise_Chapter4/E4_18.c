/*E4.18*/
#include<iostream> using namespace std;
int main(void)
{
	int a=10;
	a=a++;
	a = a++ * a--;
	printf("%d\n",a);
	printf("%d\n",a++ * a++);
	return 0;
}
				
