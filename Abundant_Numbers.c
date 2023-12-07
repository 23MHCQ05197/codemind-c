#include<stdio.h>
int main()
{
    int n,sum=0,i,t;
    scanf("%d",&n);
    t=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}