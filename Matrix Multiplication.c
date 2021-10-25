#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j,k,sum;
    printf("\nEnter no of rows : ");
    scanf("%d",&m);
    printf("\nEnter no of columns : ");
    scanf("%d",&n);
    printf("\nEnter elements of matrix A : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elements of matrix B : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nb[%d][%d]=",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nElements of matrix A : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nElements of matrix B : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                sum=sum+a[i][k]*a[k][j];
            }
            c[i][j]=sum;
        }
    }
    printf("\nElements of multiplication matrix C : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
