#include<stdio.h>
int main()
{
    char str[10];
    for(int i=0;i<10;i++)
    {
        scanf("%c",str+i);
    }
    printf("%c",str[6]);
}