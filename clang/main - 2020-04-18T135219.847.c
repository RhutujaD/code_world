#include<stdio.h>
int arm(int);
void main()
{
    int n,a;
    printf("enter n");
    scanf("%d",&n);
    a=arm(n);
    printf("\t%d",a);
}
int arm(int x)
{
    int t,m,c,s=0;
    t=x;
    while(x!=0)
    {
        m=x%10;
        c=m*m*m;
        s+=c;
        x=x/10;
    }
    if(t==s)
    printf("arms");
    else
    printf("not arms");

    return s;
}