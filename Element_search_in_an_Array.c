#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    int se;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
      if(arr[i]==se)
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