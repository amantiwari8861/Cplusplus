#include <iostream>  
using namespace std;  
class Calc  
{  
    
    int x;  
      public:  
      Calc(){}  
    Calc(int i)  
    {  
       x=i;  
    }  
    void operator+(Calc);  
    void display();  
};  
  
void Calc :: operator+(Calc a)  
{  
    //  cout<<" a = "<<a.x<<endl;
    int m = x+a.x;  
    cout<<"The result of the addition of two objects is : "<<m;  
  
}  
int main()  
{  
    Calc a1(5);  
    Calc a2(4);  
    a1+a2;  
    return 0;  
}  