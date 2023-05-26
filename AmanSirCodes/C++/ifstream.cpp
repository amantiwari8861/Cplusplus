#include<iostream>
#include<fstream>
using namespace std;
 
 int main()
 {
	ifstream obj("1.txt");
	//int str[30];
	char str[30];
	obj>>str;
	cout<<str<<endl;
	return 0;
 }
