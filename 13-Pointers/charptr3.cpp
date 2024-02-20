#include <iostream>
using namespace std;
int main()
{
  // char *materials[] = {"iron", "copper", "gold"};
  string materials[] = {"iron", "copper", "gold"};
  cout<<"Please remember these materials :\n";
  for (int i = 0; i < 3; i++)
  {
    cout<<materials[i]<<endl;
  }
  return 0;
}