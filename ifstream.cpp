#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    // Creation of ifstream class object to read the file
    ifstream fin;

    // by default open mode = ios::in mode
    fin.open("C:/Users/Aman_Tiwari/Desktop/clean22.bat");

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
