/*E13_10*/
#include<iostream> using namespace std;
#define CUBE(x)  ((x)*(x)*(x))
int main(void)
{
	int i=1;
	while(i<=8)
		printf("%d\t",CUBE(i++)); 
	return 0;
}