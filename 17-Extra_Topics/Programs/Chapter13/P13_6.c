/*P13.6*/
#include<iostream> using namespace std;
#define SQUARE(x)  ((x)*(x))
int main(void)
{
	int k=5,s;
	s=SQUARE(k++);
	printf("s=%d, k=%d\n",s,k);
	return 0;
}