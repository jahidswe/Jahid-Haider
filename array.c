#include<stdio.h>
int main(){
    int matrix1[2][2],matrix2[2][2],result[2][2];
    printf("Enter first matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter A%d%d number",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter second matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter B%d%d number", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Sum of the matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j]= matrix1[i][j]*matrix2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",result[i][j]);
            if(j==1)
            {
                printf("\n");
            }

        }
    }

return 0;
}