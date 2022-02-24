#include<stdio.h>
int main()
{
    int i,j=0,n,k,l;
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        i=n%10;
        j=j+i;
        n=n/10;
    }if(k%j==0)
    printf("True");
    else
printf("False");
}