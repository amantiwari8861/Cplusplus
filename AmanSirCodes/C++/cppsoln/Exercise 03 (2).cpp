#include<fstream>
int main()
{
char fname[15];
cout<<"Enter the file name  :";
cin>>fname;
char ch;
ifstream ifile(fname);
while(ifile)
{
ifile.get(ch);
if(ch>='a' && ch<='z') // In case the file contains any lower case 
 //alphabets
{
ch=ch-32;
}
cout<<ch;
};
cout<<endl;
}
