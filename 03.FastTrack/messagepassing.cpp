#include<iostream>
using namespace std;


class Building 
{
    int floors;
    int rooms;
    bool isLiftAvailable=false;
    string ownername;
    public:

    void setBuildingDetails(int floors,int r,bool flag,string own)
    {
        this->floors=floors;
        rooms=r;
        isLiftAvailable=flag;
        ownername=own;
    }
    void showBuildingDetails()
    {
        cout<<"======== Building Details ==========\n";
        cout<<"Floors :"<<floors<<endl;
        cout<<"Rooms :"<<rooms<<endl;
        cout<<"is lift available :"<<isLiftAvailable<<endl;
        cout<<"owner name :"<<ownername<<endl;
    }

};


int main()
{
    Building b1;
    b1.setBuildingDetails(4,40,true,"Aman Tiwari");
    b1.showBuildingDetails();

    return 0;
}
