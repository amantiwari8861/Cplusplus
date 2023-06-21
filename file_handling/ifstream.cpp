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
    fin.open("../C++Content.txt");

    if(fin)
    {
        // Read a line from file
        while(getline(fin, line))
        {
            // Print the line
            cout << line << endl;
        }
    }
    else
    {
        cout << "File not found" << endl;
    }
    fin.close();
    return 0;
}
