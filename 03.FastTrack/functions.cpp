#include<iostream>
#include<conio.h>
using namespace std;

float volumeOfSphere(float radius)
{
    // cout<<"Calculating volume of sphere.."<<endl;
    float result=4.0/3.0*3.14*radius*radius*radius;
    return result;
}
float volumeOfCylinder(float radius,float height)
{
    // cout<<"Calculating volume of cylinder.."<<endl;
    float result=3.14*radius*radius*height;
    return result;
}

int main()
{
    //functions : 
    
    // cout<<"the result is "<<volumeOfSphere(2.5)<<endl;
    // cout<<"the result is "<<volumeOfCylinder(3,4)<<endl;

    int choice;
    float radius,height;
    do{
        system("cls");
        cout<<"1.Volume of Sphere "<<endl;
        cout<<"2.Volume of Cylinder "<<endl;
        cout<<"3.Exit "<<endl;
        
        cout<<"enter ur choice:";
        cin>>choice;

        switch (choice)
        {
            case 1:
                    cout<<"enter radius of sphere:";
                    cin>>radius;
                    cout<<"the volume of sphere is "<<volumeOfSphere(radius)<<endl;
                break;
            case 2:
                    cout<<"enter radius and height of cylinder:";
                    cin>>radius>>height;
                    cout<<"the volume of cylinder is "<<volumeOfCylinder(radius,height)<<endl;
                break;
            case 3:
                    cout<<"Thankyou visit again!!"<<endl;
                   break; 
            default:cout<<"invalid choice!!";
                break;
        }
        cout<<"Press any key to continue.....";
        getch();
    }while(choice!=3);



    return 0;
}