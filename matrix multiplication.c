#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,sum;
    printf("enter the no of rows:");
    scanf("%d",&r);
    printf("enter the no.of cols:");
    scanf("%d",&c);
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the element a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the element b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nthe matrix multiplication is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=0;
            for(k=0;k<r;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
            printf("%d\t",sum);
        }
        printf("\n");
    }
    return 0;
}
