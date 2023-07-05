/*P6.2 Program to draw a line*/
#include<iostream> using namespace std;
void drawline(void);	/*Function Declaration*/
int main(void)
{
	drawline();        	/*Function Call*/
	return 0;
}
void drawline(void)		/*Function Definition*/
{
	int i;
	for(i=1; i<=80; i++)
		printf("-"); 
}