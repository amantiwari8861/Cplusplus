#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	int n,reg[100];
	ofstream obj("student.txt");
	cout<<"how many student id u wanna enter"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=strlen(str);j++)
		{
		char name[i][100];
		cout<<"input the registration id "<<i<<" student data"<<endl;
		obj.get(reg[i]);
		cout<<"input the name of "<<i<<" student data"<<endl;
		obj.get(name[i]);
		}
	}
	// for(int i=0;i<n;i++)
	// {
		// char name[i][100];
		// cout<<" the registration id of  "<<i<<"  student : ";
		// obj.put(reg[i]);
		// cout<<"  the name of   "<<i<<"  student : ";
		// obj.put(name[i]);
	// }
	
	
	
}
