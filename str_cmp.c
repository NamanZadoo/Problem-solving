#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char b[20];
    gets(a);
    gets(b);
    int t=strcmp(a,b);
    if(t==0)
        printf("same");
    else
        printf("not");
    return 0;
}