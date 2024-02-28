#include<stdio.h>
int main()
{
    int n,i,j,sum=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    int sqrsum=sum*sum;
    int dif=sqrsum-((n*(n+1)*(2*n+1))/6);
    printf("%d",dif);
}