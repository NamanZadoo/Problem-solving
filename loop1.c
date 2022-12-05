#include<stdio.h>
int main()
{
    int i,j,b;
    scanf(" %d ",&b);
    char a=65+b-1;
    for(i=1;i<=10;i++)
    {
        a=64+b;
        for(j=1;j<=i;j++)
        {
            printf(" %c",a);
            a--;     
        }
       
      printf("\n");
     
    }
    return 0;    
}
