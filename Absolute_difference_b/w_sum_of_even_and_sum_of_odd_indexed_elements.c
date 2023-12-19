#include<stdio.h>
int main()
{
    int n,i,sum_even=0,sum_odd=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum_even=sum_even+a[i];
        }
        if(i%2!=0)
        {
            sum_odd=sum_odd+a[i];
        }
    }
    if(sum_even>sum_odd)
    {
        printf("%d",sum_even-sum_odd);
    }
    else
    {
        printf("%d",sum_odd-sum_even);
    }
}
