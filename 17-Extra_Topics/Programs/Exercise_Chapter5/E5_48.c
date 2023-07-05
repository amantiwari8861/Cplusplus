/*E5_48*/
#include<iostream> using namespace std;
int main(void)
{
	int i,j,n;
	for(i=1; i<=10; i++)
	{
		scanf("%d",&n);
		for(j=1; j<=n; j++)
			printf("=");
		printf("\n");
	}
	return 0;
}
