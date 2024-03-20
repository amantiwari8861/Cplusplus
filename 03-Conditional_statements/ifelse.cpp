#include<iostream> 
using namespace std;
int main()
{
    //conditional statements :if ,if else ,else if ,nested if,switch

    // syntax of if :   if(condition){  statements  }
    // int age;
    // cout<<"enter ur age :";
    // cin>>age;
    
    // if( age >= 18 ) //true block
    // {
    //     cout<<"you are ready to vote \n";
    // }
    // ---------------------------------------------------------
    // if-else syntax: if(condition){ statements }else{ statements  }

    // if(age>=18)
    // {
    //     cout<<"you can vote !\n";
    // }
    // else
    // {
    //     cout<<"you can't vote !\n";
    // }
// ____________________________________________________
    // else-if (ladder)
    /* syntax:
        if(condition1)
        {
            statements
        }
        else if(condition2)
        {
            statements
        }
        .
        .
        else
        {
            statements
        }
    */
    // float marks;
    // cout<<"enter ur marks :";
    // cin>>marks;

    // if (marks>=90)
    // {
    //     cout<<"u got admission in DU \n";
    // }
    // else if (marks>80)
    // {
    //     cout<<"Got admission in IPU";
    // }
    // else if(marks>70)
    // {
    //     cout<<"Got admission in Amity";
    // }
    // else if (marks>=33)
    // {
    //     cout<<"IGNOU";
    // }
    // else
    // {
    //     cout<<"Chai Becho";
    // }

    //Nested if
    float marks;
    cout<<"enter ur marks :";
    cin>>marks;

    if (marks>=90)
    {
        cout<<"u got admission in DU \n";
        if (marks>95)
        {
            cout<<"Got scholarship of 50k";
            if(marks==100)
            {
                cout<<"You will get an award!\n";
            }
        }
        else if(marks>92)
        {
            cout<<"scholarship of 25k";
        }
    }
    else if (marks>80)
    {
        cout<<"Got admission in IPU";
    }
    else if(marks>70)
    {
        cout<<"Got admission in Amity";
    }
    else if (marks>=33)
    {
        cout<<"IGNOU";
    }
    else
    {
        cout<<"Chai Becho";
    }

    return 0; 
}