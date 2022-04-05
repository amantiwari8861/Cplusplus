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
     cout<<"x = "<<x<<" a.x = "<<a.x<<endl;
    int m = x+a.x;  
    cout<<"The result of the addition of two objects is : "<<m<<endl;  
  
}  
int main()  
{  
    Calc a1(5);  
    Calc a2(4);  
    Calc a3(10);  
    a1+a2;  
    a3+a2;
    return 0;  
}  
/* The purpose of operator overloading is to provide a special meaning of an operator
 for a user-defined data type. With the help of operator overloading, you can redefine
  the majority of the C++ operators. You can also use operator overloading to perform
   different operations using one operator. */