#include<stdio.h>
int main()
{
    int a=0,j,k,n;
    scanf("%d",&n);
    while(n>0)
    {
        j=n%10;
        if(j>=a)
        a=j;
        n=n/10;
    }printf("%d",a);
}