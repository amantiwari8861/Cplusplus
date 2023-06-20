#include<iostream>
#include<string.h>
#include <stdlib.h>
class student
{
public:
int srchName(char s[20],char srch[20])
{
	if(strcmp(s,srch)==0)
	{
		return 0;
	}

}

};

int main(int argc, char *argv[])
{
	char srchname[20];
	if(argc<6)
	{
	cout<<endl<<"You need to pass 5 students name";
	exit(0);
	}
student object;
for(int i=1;i<6;i++)
{
	cout<<endl<<argv[i]<<" Length is "<<strlen(argv[i]);
}
cout<<"\n Enter a name which you want to search in passed list";
cin>>srchname;
for(int i=1;i<6;i++)
{
int r=object.srchName(argv[i],srchname);
if(r==0)
{
	cout<<"Name found on position "<<i;
}
}
}
