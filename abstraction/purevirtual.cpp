#include<iostream>
using namespace std;

class Rbi
{
    public:
    float rateOfInterest;
    virtual void setRateOfInterest(float) = 0;//pure virtual function
    virtual void showRateOfInterest()=0;//pure virtual function
    void showMinimunRateOfInterest()
    {
        cout<<"the minimun rate of interest is 5% P.A"<<endl;
    }
};
class SBI:public Rbi
{
    public:
    void setRateOfInterest(float r)
    {
        rateOfInterest = r;
    }
    void showRateOfInterest()
    {
        cout<<"the rate of interest is "<<rateOfInterest<<"% P.A in SBI"<<endl;
    }
};
class PNB:public Rbi
{
    void setRateOfInterest(float r)
    {
        rateOfInterest=r;
    }
    void showRateOfInterest()
    {
        cout<<"the rate of interest is "<<rateOfInterest<<"% P.A in PNB"<<endl;
    }
};
int main()
{
    // Rbi rbi;//we can't create object of abstract type

    SBI s;
    // s.setRateOfInterest(10);//passing the value to the pure virtual function body
    // s.showRateOfInterest();
    // s.showMinimunRateOfInterest();
    PNB p;

    Rbi *rbi;
    rbi = &s;
    // rbi = &p;
    rbi->setRateOfInterest(8);//here data abstraction is achieved
    rbi->showRateOfInterest();
    // rbi->showMinimunRateOfInterest();

    return 0;
}
