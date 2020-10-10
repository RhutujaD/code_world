#include<stdio.h>
int table(int n)
{
    int i,j,tab;
    for(i=1;i<=n;i++)
    
     for(j=1;j<=10;j++)
     {
         tab=i*j;
         printf("\n %d*%d=%d",i,j,tab);
     }
     
}
void main()
{
    int n,t;
    printf("enter number");
    scanf("%d",&n);
    t=table(n);
}