#include<iostream>
using namespace std;

class Bank
{
public:
    virtual void setRateOfInterest(float) = 0;//pure virtual function
    void showMinimunRateOfInterest()
    {
        cout<<"the minimun rate of interest is 5% P.A"<<endl;
    }
    virtual void showRateOfInterest()=0;//pure virtual function
};
class SBI:public Bank
{
    float rateOfInterest;
    public:
    void setRateOfInterest(float r)
    {
        rateOfInterest = r;
    }
    void showRateOfInterest()
    {
        cout<<"the rate of interest is "<<rateOfInterest<<"% P.A"<<endl;
    }
};
int main()
{
    SBI s;
    s.setRateOfInterest(10);//passing the value to the pure virtual function body
    s.showRateOfInterest();
    s.showMinimunRateOfInterest();

    // Bank b1;//we can't create object of abstract class
    Bank *b1;
    b1 = &s;
    b1->setRateOfInterest(8);//here data abstraction is achieved
    b1->showRateOfInterest();
    b1->showMinimunRateOfInterest();

    return 0;
}
