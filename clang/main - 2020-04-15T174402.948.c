#include<stdio.h>
int count_fact(int);
int main()
{
    int n,d;
    printf("enter number");
    scanf("%d",&n);
    d=count_fact(n);
    printf("\n %d",d);
    return 0;
}
int count_fact(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
           // printf("\n %d",c);
            
        }
        
        
    }
    return c;
}
