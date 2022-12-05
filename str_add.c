#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char b[20];
    int i=0,j=0;
    gets(a);
    gets(b);
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    puts(a);
}