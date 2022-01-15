#include<iostream>
using namespace std;


#include <iostream>    
using namespace std;    
class Test    
{    
   public:    
      int num;    
    //    Test(): num(8){}
    Test()
    {
        num=8;
    }    
       void operator ++()         {     
          num = num+10;     
       }    
       void Print() {     
           cout<<"The Count is: "<<num<<endl;     
       }    
};    
int main()    
{    
    Test tt;
    ++tt;  // calling of a function "void operator ++()"    
    tt.Print();    
    // ++tt;  // calling of a function "void operator ++()"    
    // tt.Print();    
    cout<<"\n"<<++(tt.num);
    return 0;    
}   

