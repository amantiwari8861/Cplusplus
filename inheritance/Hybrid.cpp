#include<iostream>
using namespace std;

class Cat
{
    public:
    int legs;
    bool isTailAvailable;
    Cat()
    {
        legs=4;
        isTailAvailable=true;
        cout<<"Cat Created"<<endl;
    }
    void showCatProperty()
    {
        cout<<"==========Cat Details========"<<endl;
        cout<<"Legs :"<<legs<<endl;
        cout<<"Is tail Available  :"<<isTailAvailable<<endl;
    }
};
class Lion:public Cat
{
    public:
    bool isKing;
    string foodType="omnivores";
    Lion()
    {
        isKing=true;
    }
    void showLionProperty()
    {
        cout<<"  Lion's Property "<<endl;
        cout<<" Jungle King ? "<<isKing<<endl;
    }
};
class Tiger :public Cat
{
    public:
    string foodType="omnivores";
    bool isIntelligent;
    Tiger()
    {
        isIntelligent=true;
    }
    void showTigerProperty()
    {
        cout<<"  Tiger's Property "<<endl;
        cout<<" Is intelligent ? "<<isIntelligent<<endl;
    }
};
class Liger:public Lion,public Tiger
{
    public:
    bool canReproduce;
    Liger()
    {
        canReproduce=false;
    }
    void showLigerProperty()
    {
        cout<<"  Liger's Property "<<endl;
        cout<<" Can Reproduce ? "<<canReproduce<<endl;
        // cout<<" Food Type : "<<foodType<<endl;
    }
};
int main()
{
    Liger l;
    l.showLionProperty();
    l.showTigerProperty();
    l.showLigerProperty();
    // l.showCatProperty();//error

    l.Lion::showCatProperty();
    l.Tiger::showCatProperty();
    // l.Cat::showCatProperty();
    return 0;
}
