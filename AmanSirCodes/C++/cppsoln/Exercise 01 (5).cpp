#include<iostream>
//Class will be used for inheritance purpose only
class  Shape
{
        //Class variables
        protected:
            int length;
            int breadth;
            int area;

        public:
            //The constructor
            Shape()
            {
              length=0;
              breadth=0;
             }
            //Function to set parameters
             virtual void setParameters()=0;
            //Function to display parameters      
             virtual void displayParameters()=0;
            //Function to draw shape, will print a message
             virtual void draw()=0;
             virtual void calculateArea()=0;
            
};
  class Rectangle: public Shape
  {
      void setParameters()
      {
         cout<<"Enter length and breadth:";
         cin>>length;
         cin>>breadth;
      }
      void displayParameters()
        {
           cout<<"Length and breadth are:"<<length<<":"<<breadth;
        }
        //Function to draw shape, will print a message
        void draw()
        {
           cout<<"Draw a rectangle";
        }
          void calculateArea()
          {
             cout<<"Area:"<<length*breadth;
           }
 
};
class Circle:public Shape
{
    int radius;
    void setParameters()
    {
       cout<<"Enter radius";
       cin>>radius;
    }
    void displayParameters()
    {
       cout <<"Radius is :"<<radius;
    }
      //Function to draw shape, will print a message
        void draw()
    {
       cout<<"Draw Circle";
    }
    void calculateArea()
    {
       cout<<"Area is:"<<3.14*radius/2;
    }
};
int main()
{
//use to test the implementation
//Ask user what he wants to draw and draw accordingly
Shape *shape;
cout <<"Specify what you want to draw:";
cout <<"R for rectangle"<<endl;
cout <<"C for circle"<<endl;
char choice;
cin>>choice;
switch(choice)
{
            case 'R':
            case  'r':
            shape= new Rectangle();
            break;
            case 'C':
            case  'c':
            shape=new Circle();
}
 shape->setParameters();
 shape->displayParameters();
 shape->calculateArea();
 shape->draw();
}