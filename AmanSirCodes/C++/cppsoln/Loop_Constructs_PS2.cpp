#include <iostream>
class Customers
{

	float amounts[10];
	public:
void sortData()
{
	int ctr;
	for ( ctr = 0; ctr < 10; ctr ++ )
	{
		cout << “Enter the amount : ";
		cin >> amounts[ctr];
	}
	int counter=0;
	/* Traverse the array */
	while(counter < 9)
	{
		float temp;
		/* Compare the value of current element with the next */
		if(amounts[counter] > amounts[counter + 1])
		{
			/* Swap the values */
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
	/* Display all the array elements */
	for(int counter = 0;counter < 10; ++counter)
	{
		cout << "Element " << counter << ":  " << amounts[counter]		     << endl;
	}
}
};
int main()
{
 	Customers C1;
 	C1.sortData();
 	C1.display();
 	return 0;
}
