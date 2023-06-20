#include<iostream>
using  std::cout;
using  std::cin;
int main()
{
    char arr[]={'A','I','E','U','H','K'};
    int vcount,ccount;
    vcount=ccount=0;
    for (int i = 0; i < 6; i++)
    {
        switch (arr[i])
        {
        case 'A':
        case 'E':        
        case 'I':        
        case 'O':        
        case 'U': ++vcount;
                break;      
        default:++ccount;
            break;
        }
    }
    cout<<"vowels :"<<vcount<<" consonant :"<<ccount;
    return 0;
}
