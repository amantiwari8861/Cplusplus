#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	fstream fstream_obj;
	fstream_obj.open("new_file.txt",ios::in);
	if(!fstream_obj)
	{
		cout<<"file not found"<<endl;
	}
	else
	{
		char chr;
		while(!fstream_obj.eof())
		{
			
		}
		fstream_obj.close();
	}
	getch();
	return 0;
}