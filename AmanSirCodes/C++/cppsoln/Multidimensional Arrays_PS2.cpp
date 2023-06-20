#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
const int SIZE=5;	//maximum size of the matrix
int main()
{

	//clrscr();
	int matrix[SIZE][SIZE],i,j,rowSum[SIZE],columnSum[SIZE],row,col;
	cout<<"Enter the number of rows(max 5): \n" ;
	cin >>row;
	cout<<"Enter the number of columns(max 5): \n";
	cin >>col;
	cout<<"\nEnter row wise elements of the matrix: \n";

	for(i=0;i<row;++i)
	{
	   for(j=0;j<col;++j)
		cin>>matrix[i][j];
	}
	cout<<"The matrix create by you is: \n";
	for(i=0;i<row;++i)
	{
	   cout<<"\n";
	   for(j=0;j<col;++j)
		cout<<matrix[i][j]<<" ";
	}
	getch();

	cout<<"\nCalculating Totals...";
	getch();
	for(i=0;i<row;i++)
	{
	   rowSum[i]=0;
	      for(j=0;j<col;++j)
		rowSum[i]+=matrix[i][j];	//row sum
	}

	for(j=0;j<col;++j)
	{
	  columnSum[j]=0;
	       for(i=0;i<row;++i)
		columnSum[j]+=matrix[i][j];	//column sum
	}

	for(i=0;i<row;++i)
		cout<<"\nSum of row # :"<<i+1<<" is : "<<rowSum[i];
	for(i=0;i<col;++i)
		cout<<"\nSum of column # :"<<i+1<<" is : "<<columnSum[i];
	getch();
}
