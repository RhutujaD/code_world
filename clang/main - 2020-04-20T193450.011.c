/*#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 nums");
    scanf("%d%d",&a,&b);
    if(a>b)
    a-=b;
    else
    b-=a;
    printf("hcf is %d",b);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a,b,i,hcf;
    printf("enter 2 nums");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
    }
    printf("hcf of %d and %d is %d",a,b,hcf);
 getch();
 return 0;
}
