#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    if(a&&b!=0)
    c=a+b;
    printf("c=%d",c);
    getch();
    return 0;
}