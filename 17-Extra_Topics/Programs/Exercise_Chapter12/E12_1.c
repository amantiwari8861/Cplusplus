/*E12.1*/
#include<iostream> using namespace std;
int main(void)
{
	FILE *fptr;
	unsigned char ch;
	fptr=fopen("myfile.txt","r");
	while((ch=fgetc(fptr))!=EOF)
		putchar(ch);
	fclose(fptr);
	return 0;
}