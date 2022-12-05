#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i=0,j=0;
    gets(a);
    int x=strlen(a);
    while(a[i]!='\0')
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
        i++;
    }
    return 0;
}