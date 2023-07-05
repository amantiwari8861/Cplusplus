/*E10.6*/
#include<iostream> using namespace std;
void func(char str[]);
int main(void)
{
	char str[]="Vijaynagar";
	func(str);
	return 0;
}
void func(char str[])
{
	str=str+5;
	printf("%s\n",str);
}