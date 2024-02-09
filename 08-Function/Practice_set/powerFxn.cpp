#include "MyMathLib.h"
int powerFxn(int,int);//declaration
int modi=56;
int main()//starting point of a program
{
    cout<<"before calling in main \n";
    int num,power;
    cout<<"enter the number and power\n";
    cin>>num;
    fflush(stdin);
    cin>>power;
    int result=powerFxn(num,power);//calling of fxn
    cout<<"the result is "<<result<<"\n";
    cout<<modi<<endl;
    cout<<powerFxn(3,4)<<endl;
    cout<<powerFxn(2,4)<<endl;
    cout<<powerFxn(3,2)<<endl;
    cout<<powerFxn(2,8)<<endl;

    cout<<"after calling in main \n";
    return 0;//ending point of a program
}
int powerFxn(int num,int power) //body
{
    cout<<"inside powerFxn \n";
    cout<<modi<<endl;
    int result=1;
    for(int i=0;i<power;i++) //i=0,1,2,3
    {
        result=result*num;// 1*2=2 2*2=4 4*2=8 8*2=16 
    }
    return result; //returning the result = 16
}