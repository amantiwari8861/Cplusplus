/*E11_3*/
#include<iostream> using namespace std;
struct student {char name[20]; int age;};
int main(void)
{
	struct student stu1={"Anita", 10},stu2={"Anita",12};
	if(stu1 == stu2)
		printf("Same\n");
	else
		printf("Not same\n");
	return 0;
}