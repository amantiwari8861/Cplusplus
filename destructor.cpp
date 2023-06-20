#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
   int num=10;
        Employee()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    cout<<e1.num;
    cout<<e1.num;
    Employee e2; //creating an object of Employee  
    return 0;  
}
