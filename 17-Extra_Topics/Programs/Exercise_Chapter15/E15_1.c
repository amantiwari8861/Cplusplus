/*E15.1*/
#include<iostream> using namespace std;
enum month{jan,feb,mar,apr,may};
int main(void)
{
	enum month m;
	m = ++feb;
	printf("%d\n",m);
	return 0;
}