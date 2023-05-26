#include<stdio.h>

int main()
{
    // 2d array
    // int arr[3][4]={ {1,5,7,9},{54,6,9,3},{4,8,9,3}};
    int arr[3][4];
    printf("Enter data :\n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }    
    printf("The data is  :\n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",&arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

