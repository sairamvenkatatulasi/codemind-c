#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        float g=sqrt(i);
        sum=sum+g;
    }
    printf("%.2f",sum);
}