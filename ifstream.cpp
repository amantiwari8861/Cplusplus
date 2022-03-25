#include <iostream>
#include <fstream>

using namespace std;

// Driver Code
int main()
{
    string line;

    // Creation of ifstream class object to read the file
    ifstream fin;

    // by default open mode = ios::in mode
    fin.open("C:/Users/Aman_Tiwari/Desktop/1.txt");

    // Execute a loop until EOF (End of File)
    while (fin)
    {

        // Read a Line from File
        getline(fin, line);

        // Print line in Console
        cout << line << endl;
    }

    // Close the file
    fin.close();

    return 0;
}
