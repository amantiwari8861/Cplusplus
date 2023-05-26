#include<iostream>
#include<fstream>
using namespace std;
 
 int main()
 {
	ofstream obj("C:/Users/Aman_Tiwari/Desktop/1.txt");
	
	obj<<"some data in file "<<endl;
	obj<<25<<' '<<45<<' '<<8910; //writing integr in file
	
	return 0;
 }
