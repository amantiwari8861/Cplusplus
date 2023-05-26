#include<iostream>
class CountsItself
{
        static int objectCount;
        int localCount;
public:
      void setCount()
      {
                localCount=++objectCount;
      }
      void displayCount()
      {
                cout<<"Total number of objects :"<<localCount;
      }
 };
int CountsItself::objectCount;
int main()
{
        CountsItself count1, count2, count3;
        count1.setCount();
        count2.setCount();
        count3.setCount();
        count3.displayCount();
}
