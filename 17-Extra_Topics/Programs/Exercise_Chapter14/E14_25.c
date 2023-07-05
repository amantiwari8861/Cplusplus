/*P14.25*/
#include<iostream> using namespace std;
int main(void)
{
	int x=511;
	if((x&(x+1))==0)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
