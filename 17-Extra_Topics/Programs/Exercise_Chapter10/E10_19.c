/*E10.19*/
#include<iostream> using namespace std;
int main(void)
{
	char str[10][20];
	int i;
	for(i=0; i<10; i++)
		scanf("%s",str[i]);
	for(i=0; i<10; i++)
		printf("%s ",str[i]);
	return 0;
}