#include <iostream.h>
void main(int argc, char *argv[])
{
     cout<<"No. of values supplied by user is : "<<argc;
     for(int i=1; i < argc; i++)
     cout<<"Value is : "<<argv[i]<<endl;
}