#include<stdio.h>
int main()
{
    int a,b,c,d=0,e;
    scanf("%d",&a);
    b=a*a;
    while(b>0)
    {
        c=b%10;
        b=b/10;
        d=d+c;
        
    }if(d==a)
    printf("Neon Number");
    else
printf("Not Neon Number");
}