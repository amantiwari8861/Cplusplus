//Chapter 13: Exercise 01-Selection Sort

#include <iostream.h>
#include <conio.h>

void SelectionSort(int *array,int len)    //selection sort function
{
	int i,j,min,minat;
	for(i=0;i<(len-1);i++)
	{
		minat=i;
		min=array[i];

      for(j=i+1;j<(len);j++)    //select the minimum of the array
	  {
		  if(min>array[j])   //ascending order for descending reverse
		  {
			  minat=j;  //the position of the minimum element
			  min=array[j];
		  }
	  }
	  int temp=array[i] ;
	  array[i]=array[minat];  //swap 
	  array[minat]=temp;

	}
}

void DisplayElements(int *array,int len) //display array elements
{
	for(int i=0;i<10;i++)
	cout<<" "<<array[i];
}

int main()
{
    clrscr();

    int a[]={29,16,51,23,2,6,21,7,1,34};  // array to sort
    cout<<"The array is:"<<endl;
    DisplayElements(a,10);             // display elements
    SelectionSort(a,10);              // call to selection sort
    cout<<endl<<"The sorted array is:"<<endl;
    DisplayElements(a,10);              // display elements

    getch();
    return 0;
}