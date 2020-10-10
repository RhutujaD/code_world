#include<stdio.h>
int sc(int n,int*s,int*c)
{
    *s=n*n;
    *c=n*n*n;
    //printf("in function %u %u",s,c);
}
void main()
{
    int n,s,c;
    printf("enter number");
    scanf("%d",&n);
    //printf("before %d %d",s,c);
    sc(n,&s,&c);
    printf(" %d %d",s,c);
}