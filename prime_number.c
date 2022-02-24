#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2&&a%3&&a%5&&a%7!=0)
    printf("prime");
    else
    printf("not a prime");
    return 0;
}