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
    void operator++()//prefix or pre-increment
    {
        num = num + 10;
    }
    void operator++(int) //postfix or post-increment
    {
        num = num + 5;
    }
    void Print()
    {
        cout << "The Value of Num is: " << num << endl;
    }
};
int main()
{
    Test tt;
    // cout << "\n"<< "num =" << ++tt.num << endl;
    // cout << "\n"<< "num =" << tt.num++ << endl;

    // ++tt;       // calling of a function "void operator ++()"
    // tt.Print(); // num is now 18

    tt++;       // calling of a function "void operator ++()"
    tt.Print(); // calling of a function "void operator ++(int)" for postfix
    return 0;
}
