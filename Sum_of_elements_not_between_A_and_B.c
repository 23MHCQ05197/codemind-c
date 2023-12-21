#include<stdio.h>
int main()
{
    int n,i,sum_low=0,sum_high=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    int se1,se2;
    scanf("%d%d",&se1,&se2);
    for(i=0;i<n;i++)
    {
        if(se1>a[i])
            {
                sum_low=sum_low+a[i];
            }
    }
    for(i=0;i<n;i++)
    {
        if(se2<a[i])
            {
                sum_high=sum_high+a[i];
            }
    }
    printf("%d",sum_low+sum_high);
}