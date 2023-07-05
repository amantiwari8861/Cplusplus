/*E14.16*/
#include<iostream> using namespace std;
int main(void)
{
	unsigned x=1434,y=32,r;
	r=x&(y-1);
	printf("%d  %d",x%y,r);
	return 0;
}
