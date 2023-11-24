#include<stdio.h>
int main()
{
    int i=1,n;
    scanf("%d%d",&n);
    while(i<=12)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i++;
    }
}