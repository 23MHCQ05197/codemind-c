#include<stdio.h>
int mul(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res=mul(a,b);
    printf("%d",res);
}
int mul(int a,int b)
{
    int res;
    res=a*b;
    return res;
}