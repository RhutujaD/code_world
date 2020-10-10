/*#include<stdio.h>
void change(int )
void main()
{
   // int i;
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("before call=%d",n);//5
    change(n);
    printf("after call=%d",n);//5
    
}
void change(int x)
{
    x+=5;
    printf("in function=%d",x);//10
}*/
#include<stdio.h>
void change(int *)
void main()
{
   // int i;
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("before call=%d",n);//5
    change(&n);
    printf("after call=%d",n);//5
    
}
void change(int*x)
{
    *x+=5;
    printf("in function=%d",x);//10
}

