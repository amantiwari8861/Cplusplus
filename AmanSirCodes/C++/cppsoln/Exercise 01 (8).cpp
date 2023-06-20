#include <iostream>
class Employee
{
int salary[10];
public:
void accept_details()
{
	int counter=0;	
		//Accept value in array
	for(;counter<9;counter++)
	{
		cout<< "Enter the Salary\n";
		cin>>salary[counter];
	}
}
void sortData()
{
	/* Traverse the array */
		int counter=0;
		while(counter < 9)
		{
			int temp;
		// Compare The Value Of Current Element With The Next 
			if(salary[counter] < salary[counter + 1])
		{
				/* Swap The Values */
				temp = salary[counter];
				salary [counter] = salary [counter + 1];
				salary [counter + 1] = temp;
				counter = 0;
				continue;
			}
			counter++;
		}
}

void display_asc()
{
		/* Display All The Array Elements */
	for(int counter = 0;counter < 10; ++counter)
	{
	  if(salary[counter] != 0)
        {      
             cout << "Element " << salary << ":  ";
             cout << salary [counter] << endl;
        }
	}
}
void display_desc()
	{
	/* Display All The Array Elements */
	for(int counter = 9;counter >= 0; ++counter)
	{
	  if(salary [counter] != 0)
        {      
             cout << "Element " << counter << ":  ";
             cout << salary [counter] << endl;
        }
	}
	}
	void display_greater()
	{
		int ctr;
		for(ctr=0;salary[ctr]!='\0';ctr++)
			if(salary[ctr]>1000)
				cout<<salary[ctr];
	}
	void display_max()
	{
		int max=0;
		for(int ctr=0;salary[ctr]!='\0';ctr++)
			if(max<salary[ctr])
				max=salary[ctr];
		cout<< "Maximum Salary is \t"<<max;
	}
	void display_min()
	{
		int min=0;
		for(int ctr=0;salary[ctr]!='\0';ctr++)
			if(min>salary[ctr])
				min=salary[ctr];
		cout<< "Minimum Salary is \t"<<min;
	}
void avgAmount()
{
	float sum;
	int counter;
	for(sum = 0.0f, counter = 0; counter < 10; counter++)
      {
             sum = sum + salary[counter];
      }
cout << endl << "The average amount is : " << sum/10 << endl;
}

};
int main()
{
Employee empObj;
empObj.accept_details();
int choice = 0;
empObj.sortData();
while(choice != 6)
{
cout << endl << "Menu ";
cout << endl << "1. The maximum salary"; 
cout << endl << "2. The minimum salary";
cout << endl << "3. The average salary"; 
cout << endl << "4. The number of employees whose salary is greater than 1000";
cout << endl << "5. The salary in ascending and descending orders";
cout << endl << "6. Exit" << endl << endl;
cout << "Enter choice ";
cin >> choice;
switch(choice)
		{
			case 1:
				empObj.display_max();				
				break;
			case 2:
				empObj.display_min();
				break;
			case 3:
				empObj.avgAmount();			
				break;
			case 4:
				empObj.display_greater();
				break;
			case 5:
cout << endl << "Descending Order " << endl;
empObj.display_asc();
cout << "Ascending Order " << endl;
empObj.display_desc();
				break;
			case 6:
				continue;
default:
cout << endl << "Please enter 1-6 only !" << endl;
		}
	}
	return 0;
}
