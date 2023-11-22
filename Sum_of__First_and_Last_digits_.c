#include<stdio.h>
int main()
{
    int n,fd,ld;
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    {
        n/=10;
    }
    fd=n;
    printf("%d",fd+ld);
}