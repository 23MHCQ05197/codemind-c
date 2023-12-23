#include<stdio.h>
int main()
{
    int n,mod,d,mod1,denomination;
    scanf("%d",&n);
    mod=n%10;
    d=n/10;
    mod1=mod/5;
    denomination=mod1+d;
    if(n%5==0)
    {
        printf("%d",denomination);
    }
    else
    {
        printf("-1");
    }
}