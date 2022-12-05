#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    gets(name);
    puts(name);
    int flag=0;
    int i=0;
    while (name[i]!='\0')
    {
        i++;
        if(name[i]==0)
            {
                flag++;
            }
    }       
    flag=flag+1;
    printf("%d",flag);
     return 0;
}