/*E14.27*/
#include<iostream> using namespace std;
int main(void)
{
	int x=245;
	x=-(~x);    
	printf("%d\t", x);
	x=~(-x); 
	printf("%d\n", x);
	return 0;
}  