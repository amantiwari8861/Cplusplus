#include <iostream.h>
class CalSalary
{
float amounts[10];
public:
void sortData()
{
	int counter=0;
	amounts[0]=200.5;
	amounts[1]=323;
	amounts[2]=0;
	amounts[3]=100.7;
	amounts[4]=314;
	amounts[5]=523;
	amounts[6]=256;
	amounts[7]=10.90;
	amounts[8]=553.90;
	amounts[9]=0;
	/* Traverse The Array */
	while(counter < 9)
	{
		float temp;
	/* Compare The Value Of Current Element With The Next */
		if(amounts[counter] < amounts[counter + 1])
		{
			/* Swap The Values */
			temp = amounts[counter];
			amounts[counter] = amounts[counter + 1];
			amounts[counter + 1] = temp;
			counter = 0;
			continue;
		}
		counter++;
	}
}
void display()
{
	for(int ctr=0; amounts[ctr]!='\0';ctr++)
		cout<< " "<<amounts[ctr];
}

};
int main()
{
CalSalary L1;
L1.sortData();
L1.display();
}
