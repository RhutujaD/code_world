#include<stdio.h>
int rev(int n)
{
    int m,r;
    while(n!=0)
    {
        m=n%10;
        r=r*10+m;
        n=n/10;
    }
    return r;
}
void main()
{
    int n,a;
    printf("enter num");
    scanf("%d",&n);
    a=rev(n);
    printf("reverse no is %d",a);
}