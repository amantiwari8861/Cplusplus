#include<iostream>
using namespace std;

int main()
{
    //Take character input from user and count the number of special
    //characters, numeric, capital and small Alphabets from an array.

    int capAlp,smallApl,numeric,specialCh;
    capAlp=smallApl=numeric=specialCh=0;

    int size;
    cout<<"enter the characeters size :";
    cin>>size;

    char sentence[size];
    cout<<"enter the sentense :";

    for (int i = 0; i < size; i++)
    {
        cin>>sentence[i];
    }

    //logic
    for (int i = 0; i < size; i++)
    {
        if(sentence[i]>=65 && sentence[i]<=90)
        {
            capAlp++;
        }
        else if (sentence[i]>=97 && sentence[i]<=122)
        {
            smallApl++;

        }
        else if (sentence[i]>=48 && sentence[i]<=57)
        {
            numeric++;
        }
        else
        {
            specialCh++;
        }
    }
    
    cout<<"Capital Alphabet : "<<capAlp<<endl;
    cout<<"Small Alphabet : "<<smallApl<<endl;
    cout<<"numeric : "<<numeric<<endl;
    cout<<"special character : "<<specialCh<<endl;

    

    return 0;
}
