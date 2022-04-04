#include <iostream>
using namespace std;
class Test
{
public:
    int num;
    //    Test(): num(8){}
    Test()
    {
        num = 8;
    }
    void operator++()//prefix
    {
        num = num + 10;
    }
    void operator++(int) //postfix
    {
        num = num + 5;
    }
    void Print()
    {
        cout << "The Count is: " << num << endl;
    }
};
int main()
{
    Test tt;
    ++tt;       // calling of a function "void operator ++()"
    tt.Print(); // count is now 18
    tt++;       // calling of a function "void operator ++()"
    tt.Print(); // calling of a function "void operator ++(int)" for postfix
    cout << "\n"<< "num =" << ++tt.num << endl;
    return 0;
}
