#include <iostream>  
using namespace std;  
class Calc  
{
    int x;  
    public:  
    Calc(){}  
    Calc(int i)  {  x=i;  }
    
    int operator+(Calc obj)
    {  
        cout<<"x = "<<x<<" obj.x = "<<obj.x<<endl;
        int m = x*obj.x;  
        // cout<<"The result of the addition of two objects is : "<<m<<endl;  
        return m;
    }  
};
int main()  
{  
    Calc a1(5);  
    Calc a2(4); 
    int sum=a1+a2; 
    cout<<"Sum = "<<sum<<endl;  
    // cout<< a3+a2<<endl;  
    // a3+a2;
    return 0;  
}  
/* The purpose of operator overloading is to provide a special meaning of an operator
 for a user-defined data type. With the help of operator overloading, you can redefine
  the majority of the C++ operators. You can also use operator overloading to perform
   different operations using one operator. */