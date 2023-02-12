#include<iostream>
using namespace std;
class Student
{
    public:
    static int rollno;
    string stuname;
    static string schoolname;
    // static string schoolname="Amity"; //error
    void showdetails()
    {
        // schoolname="Amity";//error
        // Student::schoolname="Amity";//error
        cout<<"==========Student Details=========="<<endl;
        // cout<<"Roll No :"<<rollno<<endl;//error
        cout<<"Roll No :"<<Student::rollno<<endl;
        cout<<"Name :"<<stuname<<endl;
        cout<<"School Name :"<<Student::schoolname<<endl;
    }
    // static void changeSchool()
    // {
    //     Student::schoolname="Amity";//you can't initialize static variables within class
    // }
    static void incrementRollNo();
};
string Student::schoolname="Dps";
int Student::rollno=0;
void Student::incrementRollNo()
{
    rollno++;
}

int main()
{
    Student s;
    s.stuname="Abhijeet Singh";
    // s.incrementRollNo();    
    Student::incrementRollNo();
    s.showdetails();

    Student s1;
    s1.stuname="samarth";
    Student::incrementRollNo();
    s1.showdetails();



    return 0;
}
