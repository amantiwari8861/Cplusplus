#include<iostream>
#include<cstring>
 using namespace std;
 class String
 {
	private:
	char *str;
	public:
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
		int counter;
		for(counter=0;str[counter] !='\0';counter++)
		{
			if(str[counter]==search)
			{
				str[counter]=repl;
			}
		}
		
	 }
	 void display()
		{
			cout<<str;
		}
	
 };
 int main()
 {
	String strobject;
	String strobj("kirti");
	// strobj String("aman");
	strobj.replace('k','j');
	strobj.display();
	return 0;
 }