#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void MergeArray(int[], int[], int, int[]);	// prototype for merge function 

const int SIZE=5;				//for size of two arrays, arr1 and arr2

void main()
{
int Arr3[10];   	   // new array with size as sum of sizes of arr1 and arr2
clrscr();
int Arr1[]= {4,8,10,16,23};		//sorted in ascending order
int Arr2[]= {32,30,20,18,3};		//sorted in descending order

cout<<"\nThe first array is : \n";	
  for(int a=0;a<SIZE;a++)
	cout<<Arr1[a]<<" ";
   getch();
cout<<"\n \nThe second array is : \n";
  for(int b=0;b<SIZE;b++)
	cout<<Arr2[b]<<" ";
   getch();

MergeArray(Arr1,Arr2,SIZE,Arr3);	//invoking merge function

cout<<"\n \nThe new array is : \n";
  for(int i=0;i<10;i++)
  {
	cout<<Arr3[i]<<" ";
   }
getch();
}

//merge function definition
void MergeArray (int Arr1[],int Arr2[],int Size,int Arr3[])
{
 int x, y, z;
 for(x=0,y=Size-1,z=0;x<Size && y>=0;)
 {
  if(Arr1[x]<=Arr2[y]) 	/* if elements of 1st array are smaller than elements 
of 2nd array */
  {
   Arr3[z] = Arr1[x];	//move elements of 1st array to new array
   z++;
   x++;
  }
   else		/* else if elements of 2nd array are smaller than elements of 1st array */
  {
   Arr3[z] = Arr2[y];
   z++;
   y--;
  }
 }

if(x<Size)			//if any elements remain in the 1st array
{
  while(x<Size)
  {
	Arr3[z]=Arr1[x]; //move the remaining elements of 1st array to new array
	z++;
	x++;
  }
}
else
 {
  while(y>=0)	//move remaining elements of 2nd array to new array
   {
	Arr3[z]=Arr2[y];
	z++;
	y--;
   }
 }
}
