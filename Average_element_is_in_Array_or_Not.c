#include<stdio.h>
int main()
{
    int n,i,ave,sum=0,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    for(i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
    ave=sum/n;
    for(i=0;i<n;i++)
    {
        if(ave==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}