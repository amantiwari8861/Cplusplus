/*E7_25 Binomial coefficient*/
#include<iostream> using namespace std;
int BC(int n, int k);

int main(void)
{ 
	int n,k;
	printf("Enter n and k : ");
	scanf("%d%d",&n,&k);
	printf("%d\n",BC(n,k));
	return 0;
}
int BC(int n,int k)
{
	if(k==0 || k==n)
		return 1;
	return BC(n-1,k-1) + BC(n-1,k);
}