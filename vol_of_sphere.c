#include<stdio.h>
float vol(int r)
{
    float v=0;
    v=(4.0/3.0)*3.14*r*r*r;
    return v;
}
int main()
{
    int r;
    float v;
    scanf("%d",&r);
    v=vol(r);
    printf("%f",v);
    return 0;

}