#include<iostream>
#include<set>
using namespace std;

int main()
{
    //vector,list,set,stack,queue,priority queue,map

    set<string> students;

    students.insert("Eklavya"); 
    students.insert("Krishna"); 
    students.insert("Raj"); 
    students.insert("ravi"); 
    students.insert("Eklavya"); 
    students.insert("Vishal"); 
    students.insert("Eklavya"); 

    for(string stu:students)
    {
        cout<<stu<<endl;
    }
    set<string> temp={"Raj","Abhishek"};
    students.swap(temp);
    cout<<"after swapping \n";
    for(string stu:students)
    {
        cout<<stu<<endl;
    }
    return 0;
}
