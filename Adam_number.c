#include<stdio.h>
int main()
{
    int n,a,p,b,re=0,rev=0,r;
    scanf("%d",&n);
    a=n*n;
    for(n;n>0;n=n/10){
        r=n%10;
        re=(re*10)+r;
        
    }b=re*re;
    for(b;b>0;b=b/10){
       p=b%10;
       rev=(rev*10)+p;
    }if(rev==a){
        printf("True");}
    else{
        printf("False");
    }
    
    
}