#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("a and b");
    scanf("%d %d",&a,&b);
    for(i=0;i<=b;i++)
    {
        if(a&&b==0)
        break;
        c=a+b;
    }
    printf("c=%d",c);

    getch();
    return 0;
}