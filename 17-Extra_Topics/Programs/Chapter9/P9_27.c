/*P9.27 Pointer arithmetic in void pointers*/
#include<iostream> using namespace std;
int main(void)
{
	int i;
	float a[4] = {1.2,2.5,3.6,4.6};
	void *vp;
	vp=a;
	for(i=0; i<4; i++)	
	{
		printf("%.1f\t", *(float *)vp);
		(float *)vp=(float *)vp+1;	  /*Can�t write vp=vp+1*/
	}
	printf("\n");
	return 0;
}
