/*E14.7*/
#include<iostream> using namespace std;
int main(void)
{
	unsigned int num=0x1F,pos=3,bit;
	bit=(num>>pos)&1;
	printf("%u\n",bit);
	return 0;
}