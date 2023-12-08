#include<stdio.h>
int main()
{
    int n,mul=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    printf("%d",mul);
}