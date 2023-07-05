/*E5_25*/
#include<iostream> using namespace std;
int main(void)
{	
	int i=1;
	while(i++ < 5)  
		printf("%d ",i);
	printf("\n");	


	i=1;
	while(++i < 5)  
		printf("%d ",i);
	printf("\n");	

	
	i=6;
	while(i--)   
		printf("%d ",i);
	return 0;
}
