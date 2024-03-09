#include <iostream>
#include<stdexcept>
using namespace std;

class MyCustomException : public runtime_error
{
    string message;
    public:
    MyCustomException(const string& message) : runtime_error("") // Initialize base class with empty message
    {
        this->message = message; // Set the error message
    }
    // Override the what() function to return the error message
    const char* what() const noexcept override
    {
        string msg;
        msg = "\x1B[91m" + message + "\033[0m"; // Add formatting
        return msg.c_str();
    }
};
int main() 
{
    int age;
    cout << "Enter an age: ";
    cin >> age;
    try 
    {
        if (age<=0)
        {
            throw MyCustomException("Age cannot be negative or zero");
        }
        cout<<"The Age is "<<age<<endl;
    } 
    catch (const MyCustomException& e) 
    {
        cerr << "Exception caught: " << e.what() << endl;
    }
    return 0;
}
