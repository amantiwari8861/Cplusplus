#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    
    // by default ios::out mode, automatically deletes previous
    // fout.open("Output.txt");
    // the content of file. To append the content, open in ios:app
    fout.open("Output.txt",ios::app);
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
    // remove("Output.txt");//to delete a file
    rename("Output.txt","Myfile.txt");

    return 0;
}
