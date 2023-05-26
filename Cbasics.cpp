#include<iostream>
using namespace std;
int main()
{
    // if,if-else,else if,nested,logicals,relational     
    int marks;
    cout<<"enter ur marks :";
    cin>>marks;

    // if (marks >= 33) //true block 
    // {
    //     cout<<"Passed !!";
    // }
    // else
    // {
    //     cout<<"u r fail !";
    // }
    
    // if(marks>=0 && marks<=100)
    // {
    //     cout<<"valid marks !";
    // }
    // else
    // {
    //     cout<<"invalid marks !";
    // }
    //case 1 : marks = 56
    //case 2 : marks = -10
    //case 3 : marks = 120

    // if(marks==100 || marks==33)//atleast one of the conditio must be true
    // {
    //     cout<<"Excellent job!";
    // }

    // if (marks>=60)
    // {
    //     cout<<" first division pass ";
    // }
    // else if (marks>=50)
    // {
    //     cout<<"2nd division pass";
    // }
    // else if (marks>=33)
    // {
    //     cout<<"just pass";
    // }
    // else
    // {
    //     cout<<"fail or invalid marks";
    // }
    
     if(marks>=0 && marks<=100)
    {
        cout<<"valid marks !"<<endl;
        if (marks>=60)
        {
            cout<<"first division pass ";
        }
        else if (marks>=50)
        {
            cout<<"2nd division pass";
        }
        else if (marks>=33)
        {
            cout<<"just pass";
        }
        else
        {
            cout<<"fail";
        }
    }
    else
    {
        cout<<"invalid marks !";
    }
    
    
    
    

    return 0;
}