#include<stdio.h>
int main()
{
    int n,k,x,y,b,cost;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(x>y)
    {
        b=n-k;
        cost=b*y+k*x;
        printf("%d",cost);
    }
    else
    {
       cost=n*x;
       printf("%d",cost);
    }
}