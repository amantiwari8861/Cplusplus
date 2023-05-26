#include<fstream>
int main()
{
int i=0;
char fname[15];
cout<<"Enter the file name  :";
cin>>fname;
char ch;
ifstream ifile(fname);
while(ifile)
{
ifile.get(ch);
if(ch >='A' && ch <='Z') //convert all uppercase alphabets to lowercase
{
ch=ch+32;//so that you can  check only lowercase vowels
}
switch(ch)
{
case 'a' :i=i+1;
              break;
case 'e': i=i+1;
              break;
case 'i':  i=i+1;
              break;
case 'o'  :i=i+1;
              break;
case 'u':  i=i+1;
              break;
}
}
cout<<"The total count of alphabets is: "<<i;
}
