#include<iostream>
using namespace std;

int main()
{
    int r,c,count=0;
    cout<<"enter row and column:\n";
    cin>>r>>c;

    if(r==c)
    {
        int matr[r][c];
        bool isDiagonalOne=true,isNonDiagonalZero=true;
        cout<<"Enter the elements in matrix"<<endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin>>matr[i][j];
            }  
        }   

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i==j)
                {
                    //diagonal element
                    if (matr[i][j] != 1)
                    {
                        isDiagonalOne=false;
                        break;
                    } 
                }
                else
                {
                    //non diagonal element
                    if (matr[i][j] !=0)
                    {
                        isNonDiagonalZero=false;
                        break;
                    }
                    
                }
            }  
        }

        if (isDiagonalOne==false || isNonDiagonalZero==false)
        {
            cout<<"it's not a identity matrix"<<endl;
        }
        else
        {
            cout<<"it's a identity matrix"<<endl;
        }
        
          






    }
    else
    {
        cout<<"row and column must be same !!";
    }
    






    return 0;
}
