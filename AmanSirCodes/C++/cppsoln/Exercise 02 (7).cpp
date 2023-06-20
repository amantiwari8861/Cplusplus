#include<iostream>
int main()
{
        int month;
        cout<<"Tell me a month number.";
        cout<<"I will tell you the number of days in that month.";
        cin>>month;
        switch(month)
        {
          case 1:
          case 3:
          case 5:
          case 7:
          case 8:
          case 10:
          case 12:
                  cout<<"Month has 31 days";
                  break;
          case 4:
          case 6:
          case 9:
          case 11:
                 cout<<"Month has 30 days";
                 break;
          case 2:
           cout<<"Month has either 28 or 29(if leap year) 
     days"<<endl;
                  break;
          default:
                  cout<<"There are only 12 months silly"<<endl;
}
}
