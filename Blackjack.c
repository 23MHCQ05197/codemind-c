#include<stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d%d",&a,&b);
    sum=a+b;
    if(sum>=11)
    {
        c=21-sum;
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}