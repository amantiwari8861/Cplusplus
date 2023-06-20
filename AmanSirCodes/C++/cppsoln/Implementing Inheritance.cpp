#include <iostream>
class furniture
{
protected:
	char color[12];
	int width;
	int height;
};
class bookshelf:public furniture
{
	private:
	int no_shelves;
	public:void accept()
	{
	 cout<<"Enter Color ";
	 cin>>color;
	 cout<<"Enter Width ";
	 cin>>width;
	 cout<<"Enter Height ";
	 cin>>height;	
	 cout<<"Enter No. of shelves ";
	 cin>>no_shelves;
	}
	void display()
	{
	cout<<"Color is "<<color<<endl;
	cout<<"Width is "<<width<<endl;
	cout<<"Height is "<<height<<endl;
	cout<<"Number of shelves is "<<no_shelves<<endl;
	}};
class chair:public furniture
{
	private:
	int no_legs;
	public:	void accept()
	{
	 cout<<"Enter Color ";
	 cin>>color;
	 cout<<"Enter Width ";
	 cin>>width;
	 cout<<"Enter Height ";
	 cin>>height;
	 cout<<"Enter number of legs ";
	 cin>>no_legs;
	}
	void display()
	{
	cout<<"Color is "<<color<<endl;
	cout<<"Width is "<<width<<endl;
	cout<<"Height is "<<height<<endl;
	cout<<"Number of legs is "<<no_legs<<endl;
	}};
int main()
{
	 bookshelf b1;
	 chair c1;	 
	 b1.accept();
	 b1.display();
	 c1.accept();
	 c1.display();
	 return 0;
}