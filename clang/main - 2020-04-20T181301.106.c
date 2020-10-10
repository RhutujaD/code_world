#include<stdio.h>
void count(int*,int*,int*);
void main()
{
    int p,n,z;
    p=n=z=0;
    count(&p,&n,&z);
    printf("%d %d %d",p,n,z);
}
void count(int*p,int*n,int*z)
{
    int i,no;
    printf("enter 10 numbers");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&no);
        if(n>0)
        (*p)++;
     else if(no<0)
        (*n)++;
        else if(no==0)
        (*z)++;
        
    }
    
}