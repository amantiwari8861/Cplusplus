/*E14.1*/
#include<iostream> using namespace std;
int main(void)
{
	int x=7,y=19;
	printf("%d  %d  ",x&y,x&&y);
	printf("%d  %d  ",x|y,x||y);
	printf("%d\n",x^y);
	return 0;
}