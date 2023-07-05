/*P10.21*/
#include<iostream> using namespace std;
#include<string.h>
int main(void)
{
	char *p;
	p=strchr("Multinational",'n');
	printf("%s\n",p);
	p=strrchr("Multinational",'n');
	printf("%s\n",p);
	return 0;
}
