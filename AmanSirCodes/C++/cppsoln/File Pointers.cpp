#include<fstream>
void main()
{
 	char file_nm[30],ch;
	int pos;
	cout<< "Enter File Name: ";
	cin>>file_nm;
	ifstream ifil(file_nm);
	ifil.seekg(-1,ios::end);
 //Seeks to end of file
	pos = ifil.tellg();
 //Reads the total number of characters
	while(pos>=0)
	{
    	pos=pos-1;
	//To move the cursor to the previous character
	ifil.read((char*)&ch,sizeof(char));
 //Reads a character
		cout<<ch;
		ifil.seekg(-2,ios::cur);
}}