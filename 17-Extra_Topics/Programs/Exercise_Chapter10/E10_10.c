/*E10.10*/
#include<iostream> using namespace std;
int main(void)
{
	printf("%c\t","Determination"[2]);
	printf("%c\t",*("Determination"+2));
	printf("%s\t","Determination"+2);
	printf("Determination"+2);
	printf("\t");
	printf("Determination"+strlen("Deepali"));
	printf("\t");
	printf("Determination"+sizeof("Deepali"));
	printf("\n");
	return 0;
}
