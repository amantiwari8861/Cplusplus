#include <iostream> 
using namespace std; 
  
// One function works for all data types.  This would work as difference
template <typename datatype> 
datatype myMax(datatype x, datatype y) 
{ 
  cout<<" sizeof(datatype) = "<<sizeof(datatype)<<endl;
   return (x > y)? x: y; 
} 
  
int main() 
{ 
  cout << myMax<int>(3, 7) << endl;  // Call myMax for int 
  cout << myMax<double>(3.56, 7.24) << endl; // call myMax for double 
  cout << myMax<float>(3.0, 7.68) << endl; // call myMax for double 
  cout << myMax<char>('g', 'e') << endl;   // call myMax for char 
  
  return 0; 
}
// ASCII = American standard code for information inetrchange
//a=97 b=98 c=99 d=100 e=101 f=102 g=103