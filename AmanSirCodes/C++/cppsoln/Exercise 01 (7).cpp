#include<iostream.h>
#include<conio.h>
#include<iostream> using namespace std;

class matrix
{
private:
int matrix1[3][3];
int matrix2[3][3];
int finalmatrix[3][3];

public:
	void acceptmatrix1()
	{	
		clrscr();
		cout<<"Enter the values in Matrix1 "<<endl;
		cout<<"___________________________"<<endl;
		for(int r=0;r<3;r++)
			{
				  cout<<"Enter the value in Row No. "<<r+1<<endl;
				 for(int c=0;c<3;c++)
					 {
					  cin>>matrix1[r][c];
					 }
			}

	}
	void acceptmatrix2()
	{	
		cout<<"Enter the values in Matrix2 "<<endl;
		cout<<"___________________________"<<endl;
		for(int r=0;r<3;r++)
			{
				  cout<<"Enter the value in Row No. "<<r+1<<endl;
				 for(int c=0;c<3;c++)
					 {
					  cin>>matrix2[r][c];
					 }
			}

	}

void add()
{

for(int r=0;r<3;r++)
{
  for(int c=0;c<3;c++)
  {
  finalmatrix[r][c]=matrix1[r][c]+matrix2[r][c];
  }
}

}


void displaymergedmatrix()
{
cout<<endl<<"Display Final Matrix"<<endl;
cout<<endl<<"____________________"<<endl;

for(int r=0;r<3;r++)
{
  cout<<endl;
  for(int c=0;c<3;c++)
  {
  cout<<finalmatrix[r][c]<<"  ";
  }
}

getch();
}

};

int main()
{
matrix mat;
mat.acceptmatrix1();
mat.acceptmatrix2();
mat.add();
mat.displaymergedmatrix();

}

