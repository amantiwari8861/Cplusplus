#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    // by default ios::out mode, automatically deletes
    // the content of file. To append the content, open in ios:app
    fout.open("C:/Users/Aman_Tiwari/Desktop/1.txt",ios::app);
    // fout.open("C:/Users/Aman_Tiwari/Desktop/1.txt");

    // Execute a loop If file successfully opened
    while (fout)
    {

        // Read a Line from standard input
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        // Write line in file
        fout << line << endl;
    }

    // Close the File
    fout.close();

    return 0;
}
