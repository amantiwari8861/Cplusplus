//Chapter 02: Exercise 03- Structure for accepting and displaying details
// of the candiates registering in the SuperGym.  (Array of Structures)

#include <iostream.h>
#include <conio.h>             //for clrscr() and getch()
#include <stdio.h>	       //for gets()

#define  MAX  50              //details of a maximum 50 candidates can be accepted

struct SuperGym                 //global definition of the structure
{
	int candidate_id;
	char candidate_name[30];
	float candidate_age;
}candidates[MAX];                  //declaration of the structure

int main()
{
	clrscr();
	int candidate_count,i;
	char ch;


	cout<<"Enter the number of candidates you want to register in SuperGym: ";
	cin>>candidate_count;

	//to read into the structure
	for (i= 0; i<candidate_count; i++)
	{
		cout<<endl<<"Candidate ID: ";
		cin>>candidates[i].candidate_id;
		cout<<"Candidate Name: ";
		gets(candidates[i].candidate_name);
		cout<<"Candidate Age: ";
		cin>>candidates[i].candidate_age;
	}

        //to display the data from the structure
        cout<<endl<<endl<<"Details of the candidates are:"; 
	for (i= 0; i<candidate_count; i++)
	{
		cout<<endl<<"Candidate ID: "<<candidates[i].candidate_id<<endl
		<<"Candidate Name: "<<candidates[i].candidate_name<<endl
		<<"Candidate Age: "<<candidates[i].candidate_age<<endl;

	}

	getch();
	return 0;
}


