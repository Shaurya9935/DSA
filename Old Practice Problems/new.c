// Matrix Multiplication

#include<stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3],sum =0;
    printf("Enter the elements inside the matrix A :\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("This is the first matrix :\n");
    for(int i=0;i<=2;i++)
    {
        for(int j =0;j<=2;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element inside the matrix B :\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("This is the second matrix :\n");
    for(int i=0;i<=2;i++)
    {
        for(int j =0;j<=2;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    //now the multiplication begins ;)
    for(int i =0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            sum=0;
            for(int k=0;k<=2;k++)
            {
                sum += (a[i][k]*b[k][j]);
            }
            c[i][j] = sum;
        }
        
    }
    printf("\n\n");
    for(int i=0;i<=2;i++)
    {
        for(int j =0;j<=2;j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
