/*E5_11*/
#include<iostream> using namespace std;
int main(void)
{
	int x=2,y=0;

	if(x==0)
	    y++;
	if(x>0)
	    y--;
	if(x<0)
	    y+=2;
	printf("%d %d\n",x,y);
	return 0;
}

/*
#include<iostream> using namespace std;
int main(void)
{
	int x=2,y=0;

	if(x==0)
	    y++;
	else if(x>0)
	    y--;
	else
		y+=2;
	printf("%d %d\n",x,y);
	return 0;
}
*/
