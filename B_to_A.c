#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(m>=n)
    {
        printf("%d ",m);
        m--;
    }
}