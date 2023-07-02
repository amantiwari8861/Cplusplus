#include<iostream>
using namespace std;

class Rbi
{
    public:
    virtual void setRateOfInterest(float) = 0;//pure virtual function
    void showMinimunRateOfInterest()
    {
        cout<<"the minimun rate of interest is 5% P.A"<<endl;
    }
    virtual void showRateOfInterest()=0;//pure virtual function
};
class SBI:public Rbi
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
    // Rbi rbi;//we can't create object of abstract class

    SBI s;
    // s.setRateOfInterest(10);//passing the value to the pure virtual function body
    // s.showRateOfInterest();
    // s.showMinimunRateOfInterest();

    Rbi *rbi;
    rbi = &s;
    rbi->setRateOfInterest(8);//here data abstraction is achieved
    rbi->showRateOfInterest();
    rbi->showMinimunRateOfInterest();

    return 0;
}
