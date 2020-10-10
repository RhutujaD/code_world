#include<stdio.h>
int is_special(int);
int main()
{
    int n,sp;
    printf("enter number");
    scanf("%d",&n);
    sp=is_special(n);
    if(n==sp)
    printf("special");
    else
    printf("not special");
}
int fact(int n)
{
    int i,f;
    f=1;
    for(i=1;i<=n;i++)
    {
       
        f=f*i;
    }
    return f;
}
int is_special(int x)
{
    int m,s=0;
   
    while(x!=0)
    {
        m=x%10;
        s+=fact(m);
        x=x/10;
    }
    
return s;
}