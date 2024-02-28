#include<stdio.h>
int main()
{
    char str[100],i,word=0,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
{
    if(str[i]==' '){
        word=0;
    }
    else if(word==0)
    {
        word=1;
        c++;
    }
}
printf("%d",c);
    
}