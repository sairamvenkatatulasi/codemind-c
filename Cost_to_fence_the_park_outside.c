#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=((a+2*c)*(b+2*c));
    f=a*b;
    g=(e-f)*d;
    printf("%d",g);
}