#include<stdio.h>
int table(int n)
{
    int i,tab;
    for(i=1;i<=10;i++)
    {
        tab=n*i;
        printf("\n %d*%d=%d",n,i,tab);
    }
    
}
void main()
{
    int n,t;
    printf("enter number");
    scanf("%d",&n);
    t=table(n);
   // printf("%d",t);
}