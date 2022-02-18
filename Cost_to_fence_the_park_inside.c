#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&e);
    if(a<=2*c||b<=2*c){
    printf("Impossible");}
    
    else{
d=(a*b)-((a-2*c)*(b-2*c));
printf("%d",d*e);}
return 0;
}