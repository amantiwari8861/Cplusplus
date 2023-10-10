#include<iostream>
using namespace std;

int main()
{
    /* 
        Take a number from user and count it's length and the sum of odd and even numbers 
        present in that number then let these 2 results as first and second term and make 
        fibonnaci series from them till n(the length of that number) term.
        let num=321578        OddSum=16   evenSum=10     digitLen=6
        16 10 26 36 62 98 Ans.
     */

    int num,oddSum=0,evenSum=0,digitLen=0,rem,term3;
    cout<<"Enter Number :";
    cin>>num;

    int temp,temp2;
    temp=temp2=num;

    while (temp>0)
    {
        digitLen++;
       temp=temp/10; 
    }
    
    while (temp2>0)
    {
        rem=temp2%10;
        if (rem%2==0)
        {
            evenSum+=rem;
        }
        else
        {
            oddSum+=rem;
        }
        temp2/=10;
    }
    // cout<<"Digit Length :"<<digitLen<<endl;
    // cout<<"Even Sum :"<<evenSum<<endl;
    // cout<<"Odd Sum :"<<oddSum<<endl;   
    cout<<oddSum<<" "<<evenSum<<" ";
    digitLen-=2;
    while (digitLen-->0)
    {
        term3=oddSum+evenSum;
        cout<<term3<<" ";
        oddSum=evenSum;
        evenSum=term3;
    }
     

    return 0;
}
