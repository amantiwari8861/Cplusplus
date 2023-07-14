#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // what is file handling and why we use it ?
    //program gets memory on RAM
    string line;
    // Creation of ifstream class object to read the file
    ifstream fin;

    // by default open mode = ios::in mode
    fin.open("C:\\Users\\Aman_Tiwari\\Desktop\\applist.txt",ios::in);

    if(fin)
    {
        // Read a line from file
        while(getline(fin, line))
        {
            // if (fin.eof())
            // {
            //     cout<<"Succesfully read the file!!"<<endl;
            //     break;
            // }
            // Print the line
            cout << line << endl;
        }
    }
    else
    {
        cout << "File not found or unable to open file" << endl;
    }
    fin.close();
    return 0;
}
