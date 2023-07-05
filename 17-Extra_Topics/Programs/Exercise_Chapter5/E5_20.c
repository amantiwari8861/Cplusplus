/*E5_20*/
/*(i)*/
#include<iostream> using namespace std;
int main(void)
{
	int a=5;
	begin:
	if(a) 
	{
	      printf("%d  ",a);
	      a--;
	      goto begin;
	}
	return 0;
}  	


/*(ii)*/

/*
#include<iostream> using namespace std;
int main(void)
{
	int a=5;
	begin:
	if(a)
		printf("%d  ",a);
	a--;
	goto begin;
	return 0;
}
*/
