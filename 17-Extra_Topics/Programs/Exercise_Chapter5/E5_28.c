/*E5_28*/
#include<iostream> using namespace std;
int main(void)
{
	int i,j,x=0;
	for(i=0; i<5; i++)
		for(j=i; j>0; j--)
			x=i+j+1;
	printf("x=%d\n",x);
	return 0;
}
