/*P10.4 Input and output strings using gets() and puts()*/
#include<iostream> using namespace std;
int main(void)
{
	char name[20];
	printf("Enter a name : ");
	gets(name);
	printf("Entered name is : ");
	puts(name);
	return 0;
}