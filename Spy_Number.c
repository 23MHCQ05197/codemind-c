#include<stdio.h>
int main(){
    int n,i,r,sum=0,m=1;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        m=m*r;
        sum=sum+r;
        n=n/10;
    }
    if(sum==m){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}