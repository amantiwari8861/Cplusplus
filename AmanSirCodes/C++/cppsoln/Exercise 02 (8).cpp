//Chapter 02 : Exercise 02
#include <iostream>
   class flightdetails
   {
     char flightnum[10];
     char dest[20];
     char date[8];
   public:
     void f_accept()
     {
        cout<<"Enter the flight number:";
        cin>>flightnum;
        cout<<"Enter the destination:";
        cin>>dest;
        cout<<"Enter the date:";
        cin>>date;
     }
     void f_display()
     {
       cout<<"Flight Number:"<<flightnum<<endl;
       cout<<"Destination:"<<dest<<endl;
       cout<<"Date:"<<date<<endl;
     }
   };
   class passengerdetails
   {
     char fname[15];
     char lname[20];
     int age;
     char sex;
   public:
     void p_accept()
     {
       cout<<"Enter your first name: ";
       cin>>fname;
       cout<<"Enter your last name: ";
       cin>>lname;
       cout<<"Enter your age: ";
       cin>>age;
       cout<<"Enter your sex(m/f): ";
       cin>>sex;
     }
     void p_display()
     {
       cout<<"First name:"<<fname<<endl;
       cout<<"Last name:"<<lname<<endl;
       cout<<"Age:"<<age<<endl;
       cout<<"Sex:"<<sex<<endl;
     }
   };
   void main()
   {
    flightdetails F1;
    F1.f_accept();
    passengerdetails P1;
    P1.p_accept();
    F1.f_display();
    P1.p_display();
   }