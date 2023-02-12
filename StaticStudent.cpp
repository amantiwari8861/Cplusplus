#include<iostream>
using namespace std;
class Student
{
    private:
        static int rollno;
        string stuname;
        static string schoolname;
        static void incrementRollNo();
    public:
        Student(){}
        Student(string stuname)
        {
            this->stuname=stuname;
            Student::incrementRollNo();
        }
        void showdetails()
        {
            cout<<"==========Student Details=========="<<endl;
            cout<<"Roll No :"<<Student::rollno<<endl;
            cout<<"Name :"<<stuname<<endl;
            cout<<"School Name :"<<Student::schoolname<<endl;
        }
};
string Student::schoolname="Dps";
int Student::rollno=0;
void Student::incrementRollNo()
{
    rollno++;
}
int main()
{
    Student s("Abhijeet");
    s.showdetails();

    Student s1("samarth");
    s1.showdetails();

    return 0;
}
