// C Pointers and Strings with Examples
// A string is an array of char objects, ending with a null character '\ 0'. We can manipulate strings using pointers. This pointer in C example explains this section

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[] = "Hello Aman!";
    char *p;
    p = str;
    cout<<"First character is:"<<*p<<endl;
    p = p + 1;
    cout<<"Next character is:"<<*p<<endl;
    cout<<"Printing all the characters in a string\n";
    p = str; // reset the pointer
    for (int i = 0; i < strlen(str); i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
// C Pointers and Strings with Examples
// A string is an array of char objects, ending with a null character '\ 0'. We can manipulate strings using pointers. This pointer in C example explains this section
