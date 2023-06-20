//Finding maximum and minimum value
#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int arr[10], max, min;
 cout<<"Enter 10 values:\n";
    for(int j=0;j<10;j++)
	cin>>arr[j];
 min=arr[0];
 max=arr[0];
   for(int i=0;i<10;i++)
  {
    if (arr[i]>max)
      max=arr[i];
    else if(arr[i]<min)
      min=arr[i];
  }
cout<<"The maximum number is :" << max;
cout<<endl<<"The minimum number is :" <<min;
getch();
}
