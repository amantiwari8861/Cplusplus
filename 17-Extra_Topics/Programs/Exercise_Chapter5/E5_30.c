/*E5_30*/
#include<iostream> using namespace std;
int main(void)
{
	int i=1;
	for( ; ; )
		if(i++==3)
			break;	
	printf("%d ",i);
	
	i=1;
	while( )
		if(i++==3)
			break;
	printf("%d ",i);
	return 0;
}