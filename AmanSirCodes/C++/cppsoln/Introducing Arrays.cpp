#include <iostream>
#include <conio.h>
using namespace std;
class Customer
{
private:
int mobileNo[10];
char name[26];
char dateOfBirth[11];
char billingAdd[51];
char city[26];
char phoneNo[14];
float amountOutstanding;
public:
void print()
{
cout << endl << "Mobile phone number: ";
cout << mobileNo << endl;
cout << "Name: ";
cout << name << endl;
cout << "Date of Birth: ";
cout << dateOfBirth << endl;
cout << "Billing Address: ";
cout << billingAdd << endl;
cout << "City: ";
cout << city << endl;
cout << "Residence phone number: ";
cout << phoneNo << endl;
cout << "Amount due: ";
cout << amountOutstanding << endl;
}
void get()
{
cout << "Mobile phone number: ";
cin >> mobileNo;
cout << endl << "Name: ";
cin >> name;
cout << endl << "Date of Birth: ";
cin >> dateOfBirth;
cout << endl << "Billing Address: ";
cin >> billingAdd;
cout << endl << "City: ";
cin >> city;
cout << endl << "Residence phone number: ";
cin >> phoneNo;
cout << endl << "Amount due: ";
cin >> amountOutstanding;
}
};
int main()
{

Customer object;
object.get();
object.print();
getch();
return 0;
}
