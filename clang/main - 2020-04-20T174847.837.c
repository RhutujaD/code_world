#include<stdio.h>
int p,n,z;
void main()
{
    count();
    printf("% %d %d",p,n,z);
}
void count()
{
    int i,n;
    printf("enter 10 numbers");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        if(n<0)
        p++;
        else if(n>0)
        n++;
        else if(n==0)
        z++;
    }
    printf("p=%d,n=%d,z=%d",p,n,z);
}