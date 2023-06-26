#include<iostream>

int main()
{
    int r,c,count=0;
    std::cout<<"enter row and column:\n";
    std::cin>>r>>c;

    int matr[r][c];

    std::cout<<"Enter the elements in matrix"<<std::endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cin>>matr[i][j];
        }  
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matr[i][j] != 0)
            {
                count++;
            }
            
        }
    }
    std::cout<<"total non-zero elements ="<<count;
    return 0;
}
