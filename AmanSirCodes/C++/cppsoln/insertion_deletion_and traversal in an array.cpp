  // Program to illustrate insertion and deletion of elements in an array

  #include<iostream.h>
  #include<conio.h>
  #include<stdio.h>

  
  int arr[5]={2,5,7,10}; // Declaring array outside main()

  // function prototypes

  void ArrInsert(int, int);
  void ArrDelete(int);

  void main()
  {
   clrscr();
   char ans;
   int choice;
   int Num,Pos;

   
    cout<<"1> Insert \n";
    cout<<"2> Delete \n";

    cout<<"Enter Choice: ";
    cin>>choice;

    switch(choice)
    {
     case 1:

     cout<<"\nThe current array is:";
     for(int i=0;i<5;i++)
       cout<<arr[i]<<" ";

     cout<<"\nEnter element to be inserted:";
     cin>>Num;
     cout<<"\nEnter Position where new element is to be inserted:";
     cin>>Pos;

     ArrInsert(Num,Pos);
     break;

     case 2:
	  cout<<"\nThe current array is:";
     for(int j=0;j<5;j++)
       cout<<arr[j]<<" ";

     cout<<"\nEnter Position from which element is to be deleted: ";
     cin>>Pos;
     ArrDelete(Pos);
     break;
    }
   
    cout<<"\n";

    cout<<" The updated array is:";
     for(int i=0;i<5;i++)
       cout<<arr[i]<<" ";
getch(); 
}
  
 

  // insertion function
  void ArrInsert(int Num, int Pos)
  {
   for(int i=4; i>=Pos;i--)
     arr[i]=arr[i-1];
   arr[i]=Num;
  }

  
  void ArrDelete(int Pos)
  {
   for(int i=Pos; i<4;i++)
   arr[i-1]=arr[i];
   arr[i-1]=0;
  }
