#include<stdio.h>
int main()
{
    int r1,c1,sum_odd=0,sum_even=0;
    scanf("%d%d",&r1,&c1);
    int a[r1][c1],i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(a[i][j]%2!=0)
            {
                sum_odd+=a[i][j];
            }
        }
    }
     for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(a[i][j]%2==0)
            {
                sum_even+=a[i][j];
            }
        }
    }
    printf("%d %d",sum_even,sum_odd);
}