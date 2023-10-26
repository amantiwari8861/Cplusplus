#include<iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[]={10,20,30,50};
    // for (int e : arr) //for each loop
    // {
    //     cout<<" element :"<<e<<endl;
    // }
    
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // for (int e : numbers) //for each loop
    // {
    //     cout<<" element :"<<e<<endl;
    // }
    for (int i = 0; i < numbers.size(); i++)
    {
        cout<<numbers.at(i)<<endl;
    }
    numbers.pop_back();//Removes last element. This is a typical stack operation. It shrinks the %vector by one
    cout<<"after removing \n";
    numbers.insert(numbers.begin()+2,99);
    numbers.insert(numbers.end()-1,99);
    numbers.push_back(100);
    for (int i = 0; i < numbers.size(); i++)
    {
        cout<<numbers.at(i)<<endl;
    }
    return 0;
}
