/*E12.4*/
#include<iostream> using namespace std;
int main(void)
{
	FILE *fptr;
	int ch;
	fptr = fopen("names.txt",'r');
	while((ch=fgetc(fptr))!=EOF)
		putchar(ch);
	fclose(fptr);
	return 0;
}