#include<iostream> using namespace std;
#include<iostream.h>
#include<conio.h>

const int SIZE=3;	//maximum size of the matrix
void main()
{

	clrscr();
	int array[SIZE][SIZE];
	
cout<<"Enter numbers for a two-dimensional array";
	for(int a=0;a<SIZE;++a)
	{
	   for(int j=0;j<SIZE;++j)
		cin>>array[a][j];
	}

	int min=array[0][0], max=array[0][0];
	int i=1, count=1;
	do
	{

	     do
	       {

		if(min>array[i][count])
		    min=array[i][count];
		if(max<array[i][count])
		    max=array[i][count];
		count++;
		}while(count<=SIZE);
        count=1;
	i++;
	}while(i<=SIZE);
		    
cout<<"The minimum number is: " <<min<<endl;
cout<<"The maximum number is: " <<max;
getch();

}