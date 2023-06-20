#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

class input
{		
		int i,j[25],sum[25];
		public:
		void display()
		{
		cout<<"input the no."<<endl;
		for(i=0;i<25;i++)
		{
			cin>>j[i];
			if(j[i]>0)
			{
				sum[i]=j[i];
			}
			else 
			{
				break;
			}
		}
		
		sum[i]+=sum[i];
		cout<<sum[i]<<endl;
		}
};
int main()
{
	input in;
	in.display();
	return 0;
}
		