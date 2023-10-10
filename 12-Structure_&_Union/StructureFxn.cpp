#include<iostream>
using namespace std;

struct calculator
{
    string modelname;
    string brandname;
    double price;
    double add(double a,double b)
    {
        return a+b;
    }
};
int main()
{
    struct calculator calc;
    calc.modelname="casio scientific";
    calc.brandname="CASIO";
    calc.price=800.5;
    double result=calc.add(10.2,50.7);
    cout<<" Calculator Details \n";
    cout<<calc.brandname<<endl;
    cout<<calc.modelname<<endl;
    cout<<calc.price<<endl;
    cout<<"the result is "<<result;
    return 0;
}
