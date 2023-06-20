//Chapter 13: Exercise 02-Insertion Sort

#include <iostream.h>
#include <conio.h>

const int MAXELEMENTS=6;

void InsertionSort(int x[],int length)    //defining a function
{
  int index,i;
  for(int j=1;j<length;j++)
  {
     index=x[j];
     i=j-1;
     while(x[i]>index && i>=0)
     {
	 x[i+1]=x[i];
         i--;
     }
     x[i+1]=index;
  }
}

int main()
{
  int array[MAXELEMENTS]={10,3,4,8,0,13};
  int x;

  clrscr();
  cout<<"NON SORTED LIST:"<<endl;
  for(x=0;x<MAXELEMENTS;x++)
  {
       cout<<"\t"<<array[x]<<endl;
  }

  InsertionSort(array,MAXELEMENTS); 	//calling the function

  cout<<endl<<"SORTED LIST:"<<endl;

  for(x=0;x<MAXELEMENTS;x++)
  {
       cout<<"\t"<<array[x]<<endl;
  }
  getch();
  return 0;
  }
