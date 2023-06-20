#include<iostream>
using namespace std;

class StaticPolyMorphism
{
    public:
    /* void dispaly(int data)
    {
        cout<<"int "<<data<<endl;
    }
    void dispaly(float data)
    {
        cout<<"float "<<data<<endl;
    }
    void dispaly(double data)
    {
        cout<<"double "<<data<<endl;
    } */
    void dispaly(int data,char data2)
    {
        cout<<"int "<<data<<endl;
    }
    void dispaly(char data,int data2)
    {
        cout<<"int 2nd fxn"<<data<<endl;
    }
    // int dispaly(char data,int data2) //we can't overload on basis of return type of fxn
    // {
    //     cout<<"int 2nd fxn"<<data<<endl;
    //     return data2+5;
    // }
// u can do overloading by changing the no. of arguments,sequence of argument and data type of arguments 
};
int main()
{
    StaticPolyMorphism st;
    // st.dispaly(10);
    // st.dispaly(50.657f);
    // st.dispaly(67.87888);
    st.dispaly('A',67);
    return 0;
}