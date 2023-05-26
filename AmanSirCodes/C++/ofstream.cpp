#include<iostream>
#include<fstream>
using namespace std;
 
 int main()
 {
	ofstream obj("1.txt");
	obj<<"hello c++ this is writing in a file"; //obj is object of ofstream
	return 0;
 }
