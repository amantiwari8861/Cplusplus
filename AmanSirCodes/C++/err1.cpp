#include<iostream>
#include<conio.h>
#include<cstring>
 using namespace std;
 class String
 {
	public:
	char *str;
	String()
	{
		str=0;
	}
	String(char *inString)
	{
		str= new char[strlen(inString)+1];
		strcpy(str,inString);
	}
	 void replace(char search,char repl)
	 {
       try{
           int counter;
		for(counter=0;str[counter] !='\0';counter++)
		{
			if(str[counter]==search)
			{
				str[counter]=repl;
			}
		}
			cout<<str;
       }
       catch(...)
       {
           cout<<"error";
       }
	 }
 };
 int main()
 {
	String strobject;	//String strobj("kirti");
	strobject.replace('+',' ');
	return 0;
 }
