#include<iostream>
using namespace std;
class animal
{
	
	public:
	virtual void sound()=0;//pure virtual function a part of abstraction
	void sleeping()
	{
		cout<<"sleeping";
	}
};
class dog : public animal
{
	public:
	void sound()
	{
		cout<<"bark"<<endl;//after commenting this function it will give error and say u must have to give 
		//sound function body
	}
};
int main()
{
	dog obj;
	obj.sound();
	obj.sleeping();
	return 0;
}