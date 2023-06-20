#include <iostream>
using namespace std;
class mammals
{
public:
    virtual void function()
    {
        cout << "they walks except whale..." << endl;
    }
    void show()
    {
        cout << " i am a mammal" << endl;
    }
};
class humans : public mammals
{
public:
     void function()
    {
        cout << "Walking on 2 legs ..." << endl;
    }
};
class cats : public mammals
{
public:
     void function()
    {
        cout << "Walking on 4 legs ..." << endl;
    }
};
int main(){
    mammals *m;
    mammals m2;
    humans h;
    cats c;
    //mammals class function called
    // m=&m2;
    // m->function();
    //humans class function called
    m = &h;
    m->function();
    //cats class function called
    m = &c;
    m->function();
    //cats class non virtual function called
    m->show();
    return 0;
}