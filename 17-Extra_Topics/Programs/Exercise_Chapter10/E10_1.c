/*E10.1*/
#include<iostream> using namespace std;
int main(void)
{
	int i=0;
	char name[10] = {'M','o','h','i','n','i','\0'};
	while(name[i])
		putchar(name[i++]);
	return 0;
}