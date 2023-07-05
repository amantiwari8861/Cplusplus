/*E10.8*/
#include<iostream> using namespace std;
int main(void)
{
	char *p="Devanshi";
	char arr[]="Devanshi"; 
	*(p+2)='b'; 
	arr[2]='b';
	puts(p);
	puts(arr);
	return 0;
}