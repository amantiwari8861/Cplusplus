#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ofstream obj("1.txt");
	char str[]="hii this is my program file";
	
	for(int i=0;i<=strlen(str);i++)
	{
		obj.put(str[i]);
	}
		obj.close();
		
		ifstream obj2("1.txt");
		char chstr[100];
		int i=0;
		while(obj2.get(chstr[i++]));
		cout<<chstr;
		
		return 0;
}