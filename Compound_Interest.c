#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T,CI;
    scanf("%f%f%f",&P,&R,&T);
    CI=P*pow(1+R/100,T)-P;
    printf("%.2f",CI);
    
}