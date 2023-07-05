/*E5_53*/
#include<iostream> using namespace std;
int main(void)
{
	int n,count=0,rem;
	
	printf("Enter a number : ");
	scanf("%d", &n);
	
	n/=10;
	count++;
	while(n>0)
	{	
		n/=10;		
		count++;
	}
	printf("Number of digits=%d\n", count);
	return 0;
}