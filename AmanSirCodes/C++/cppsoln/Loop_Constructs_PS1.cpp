#include <iostream>
class strings
{
  char source[101], dest[101];
  int pos ,j;
  public:
  void reverseString()
  {
	pos=j=0;
	cout << "Enter string to be reversed" 
	     << " (please enter a maximum of 100 characters): " << endl;
	cin >> source;
	while(source[pos]!= '\0')
	{
	  pos = pos + 1;
	}
	for(--pos; pos >= 0 ;dest[j++] = source[pos--]);
	dest[j] = ‘\0’;
  cout << endl << "The reversed string is: " << endl << dest << endl;
  }
};
int main()
{
  strings S1;
  S1.reverseString();
  return 0;
}
