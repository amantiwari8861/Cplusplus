#include<iostream> 
using namespace std; 
  
template<typename T,typename U> 
class ClassName 
{ 
    T x2; //int x;
    U y2; //double y;
	public: 
    ClassName(T x,U y) 
	{
		cout<<"Constructor Called\n"<<endl;
		cout<<"sizeof(T) = "<<sizeof(T)<<endl;
		cout<<"sizeof(U) = "<<sizeof(U)<<endl;
		x2=x;
		y2=y;
		cout<<"x :"<<x2<<endl;
		cout<<"y :"<<y2<<endl;
	} 
}; 
		//class = typename
int main()  
{ 
   ClassName<char, char> obj('h','g'); 
   ClassName<int, double> obj2(5,6.78); 
   ClassName<int, char> obj3(5,'A'); 
   return 0; 
}
