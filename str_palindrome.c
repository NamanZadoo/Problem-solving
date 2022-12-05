#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int t,flag=0;
    gets(name);
    int i=0;
    while (name[i]!='\0')
        i++;
    i=i-1;
    int j=0;
    while(j<i)
    {
        if(name[i]!=name[j])
        {
            flag=1;
            break;
        }

    i--;
    j++;
        
    }
    if(flag==0)
        printf("palindrome");
    else
        printf("not");
    return 0;
}