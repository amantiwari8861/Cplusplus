/*E5_57*/ 
#include<iostream> using namespace std;
int main(void)
{
	int x,y,i,result;
    printf("Enter x and y : ");
	scanf("%d%d",&x,&y);
	
	result=1;
	for(i=1; i<=y; i++)
		result*=x;
	printf("%d\n",result);
	return 0;
}
