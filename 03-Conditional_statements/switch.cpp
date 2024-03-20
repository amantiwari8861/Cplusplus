#include<iostream> 
using namespace std;
int main()
{
    int choice;
    cout<<"1.sum\n";
    cout<<"2.subtract\n";
    cout<<"3.multiplication\n";
    cout<<"4.divide\n";
    cout<<"enter the choice :\n";
    cin>>choice;//3
    
    switch(choice)
    {
        case 1: cout<<"sum will perform\n";
                break;
        case 2: cout<<"subtract will perform\n";
                break;
        case 3: cout<<"multiplication will perform\n";
                break;
        case 4: cout<<"divide will perform\n";
                break;
        case 54: cout<<"something will perform\n";
                break;
        default:cout<<"invalid case !";
        break;
    }
    return 0;
}