#include<fstream>
class fileoperation
{
char fname[15];
int i;
char ch;
public:
void fileopen();
void vowel();
void chgcase();
};

void fileoperation::fileopen()
{
cout<<"Enter the file name  :";
cin>>fname;
ifstream ifile(fname);
}

void fileoperation::vowel()
{
i=0;
ifstream ifile(fname);
while(ifile)
{
ifile.get(ch);
if(ch >='A' && ch <='Z') //convert all uppercase alphabets to 
    //lowercase
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

void fileoperation::chgcase()
{
ifstream ifile(fname);
while(ifile)
{
ifile.get(ch);
if(ch>='a' && ch<='z') // In case the file contains any lower case 						 //alphabets
{
ch=ch-32;
}
cout<<ch;
};
cout<<endl;
}
int main()
{
fileoperation f1;
{
fileoperation f1;
f1.fileopen();
f1.vowel();
f1.chgcase();
}
}