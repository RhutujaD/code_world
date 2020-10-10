#include<stdio.h>
void fib(int n)
{
int i,c,a,b;
a=0;
b=1;
for(i=0;i<=n;i++)
{
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
}

}
void main()
{
    int no;
    printf("enter no");
    scanf("%d",&no);
    fib(no);
    getch();
    return 0;
   

}