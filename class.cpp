#include<iostream>
using namespace std;

class Building
{
	public:
	string name="Samsung";
	int floors=0;
	int rooms=70;
	void fxn()
	{
	cout<<"name :"<<name<<" floors :"<<floors<<" rooms : "<<rooms<<endl;
	}
};
int main(){
	Building b1;
	b1.fxn();
	b1.floors=9;
	cout<<b1.name<<endl;
	cout<<b1.floors<<endl;
	cout<<b1.rooms<<endl;
	b1.fxn();
	return 0;
}