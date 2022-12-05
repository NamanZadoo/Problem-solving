#include<stdio.h>
int main()
{
    char s[50];
    gets(s);
    int i=0,flag=0;
    if(s[0]=='_'||(s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z'))
    {
        i=1;
        while(s[i]!='\0')
        {
            if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_'||s[i]=='$')
            {
                i++;
            }
            else
            {
                flag=1;
                break;
            }
        }    
    }
    else
    {
        flag=1;
    }
    if(flag==1)
        printf(" INVALID");
    else
        {
            if(flag==0&& i<=32)
            {
                printf(" VALID");
            }
            else
            {
                printf(" INVALID");
            }
        }
    return 0;

}