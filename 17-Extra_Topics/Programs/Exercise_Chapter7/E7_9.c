/*E7.9*/
#include<iostream> using namespace std;
int func(int n); 
int main(void)
{ 
	printf("%d\n",func(14837));
	return 0;
} 
int func(int n) 
{ 
	return (n)? n%10 + func(n/10) : 0; 
} 