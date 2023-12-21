#include<stdio.h>
int main()
{
    int r1,c1,flag=0;
    scanf("%d%d",&r1,&c1);
    int a[r1][c1],i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int se;
    scanf("%d",&se);
     for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(a[i][j]==se)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}