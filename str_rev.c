#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int t;
    gets(name);
    int i=0;
    while (name[i]!='\0')
        i++;
    i=i-1;
    int j=0;
    while(j<i)
    {
        t=name[i];
        name[i]=name[j];
        name[j]=t;
        i--;
        j++;
    }
    puts(name);
    return 0;
}