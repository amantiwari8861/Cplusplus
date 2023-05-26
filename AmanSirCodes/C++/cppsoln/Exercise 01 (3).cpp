#include <iostream.h>	
class application	
{	
protected:
        char appcode[4];
        int storagespace;
public:
        void getapp()
        {
        cout<<"enter application code:";
        cin>>appcode;
        cout<<"enter the storage requirement";
        cin>>storagespace;
        }
        void showapp()
        {
        cout<<endl<<"Application code  :"<<appcode<<endl;
        cout<<"Storage space"<<storagespace<<endl;
        }
};
class spellchecker:virtual public application
{
protected:
        char lang[5];
public:
        void getspell()
        {
        cout<<"enter the language:";
        cin>>lang;
        }
        void showspell()
        {
        cout<<"Language:"<<lang<<endl;
        }
};
class calculator:virtual public application
{
protected:                       
  int noofoperations;
public:
        void getcal()
        {
        cout<<"enter no of operations";
        cin>>noofoperations;
        }
        void showcal()
        {
        cout<<"no of operations"<<noofoperations<<endl;
        }
};                                       
class spreadsheet : public spellchecker,public calculator
{
private:
        int noofsheets;
public:
        void getsheet()
        {
        getapp();
        getspell();
        getcal();
        cout<<"enter no of sheets";     
        cin>>noofsheets;
        }
        void showsheet()
        {
        showapp();
        showspell();
        showcal();
        cout<<"No of Sheets :"<<noofsheets<<endl;

        }
};                                   
int main()
{
        spreadsheet s;
        s.getsheet();
        s.showsheet();
return 0;
}
