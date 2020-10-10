#include<stdio.h>
void main()
{
    int t,n,i,m,s,f;
    for(n=1;n<=200000;n++)
    {
        t==n;
        while(t!=0)
        {
            s=0;
            f=1;
            m=t%10;
            for(i=1;i<=m;i++)
            {
                f=f*i;
            }
            s+=f;
            t=t/10;
        }
        if(n==s)
        printf("special no is %d",n);
    }
}