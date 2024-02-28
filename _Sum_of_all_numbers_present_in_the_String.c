#include<stdio.h>
int main()
{
    char str[100],sum=0,i=0;
    scanf("%[^
]s",str);
    while(str[i]!=NULL)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum=sum+str[i]-'0';
        }
        i++;
    }
    printf("%d",sum);
}