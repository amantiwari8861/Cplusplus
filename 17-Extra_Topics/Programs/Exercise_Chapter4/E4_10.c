/*E4.10*/
#include<iostream> using namespace std;
int main(void)
{
	int x,y,z,k=10;
	k+=(x=5, y=x+2, z=x+y);
	printf("x=%d, y=%d, z=%d, k=%d\n",x,y,z,k);
	return 0;
}