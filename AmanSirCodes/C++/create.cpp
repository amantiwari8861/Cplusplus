#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	fstream newfile_obj;
	newfile_obj.open("new_file.txt",ios::out);
	if(!newfile_obj)
	{
		cout<<"file creation fail"<<endl;
	}
	else
	{
		cout<<"new file created"<<endl;
		newfile_obj<<"learning file handling";
		newfile_obj.close();
	}
	getch();
	return 0;
}