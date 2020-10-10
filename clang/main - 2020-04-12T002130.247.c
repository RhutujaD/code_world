#include<stdio.h>
int is_special(int no)
{
    int t,m,s,n;
    s=0;
    t=n;
    while(n!=0)
    {
        m=n%10;
        s+=fact(m);
        n=n/10;
    }
    if(s==t)
    return 1;
    else
    return 0;
}
int fact(int n)
{
    int i,f,m;
    f=1;
    for(i=1;i<=m;i++)
    {
        f=f*i;
    }
    return f;
}
void main()
{
    int no;
    printf("enter number");
    scanf("%d",&no);
    if(is_special(no))
    printf(" special no.");
    else
    printf(" not special no.");

}