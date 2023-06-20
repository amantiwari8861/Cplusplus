# include <iostream>
int main()
{
char str[10];
cout << "Input: ";
cin.get(str, 10, 'N');
cout << "Output:" << str << endl;
return 0;
}