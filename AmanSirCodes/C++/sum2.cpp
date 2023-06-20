#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

class input
{		
		int i,j[25],sum;
		public:
		void display()
		{
		  cout<<"input the no."<<endl;
		  sum=0;
		  for(i=0;i<25;i++)
		  {
			cin>>j[i];
			if(j[i]>0)
			{
				//sum2[i]=j[i];
				sum+=j[i];
			}
			else 
			{
				cout<<"this is negative no."<<endl;
			}
		  }
			cout<<sum<<endl;
		}
};
int main()
{
	input in;
	in.display();
	return 0;
}
		