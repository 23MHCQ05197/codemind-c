#include<stdio.h>
int main()
{
    int n,i,sum_odd=0,sum_even=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum_odd=sum_odd+arr[i];
        }
        else
        {
            sum_even=sum_even+arr[i];
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