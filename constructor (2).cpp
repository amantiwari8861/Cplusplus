#include<iostream>
#include<conio.h>
using namespace std;

class Building
{
    private: //by default applied in classes
    int num=50;
    public:
    int num2=80;

    void fxn()
    {
        cout<<"hi i am a fxn"<<endl;
    }
};
int main()
{
    Building obj;
    return 0;
}
