#include<stdio.h>
int pali(int n)
{
    int t,m,r;
    t=n;
    while(n!=0)
    {
        m=n%10;
        r=r*10+m;
        n=n/10;
    }
    if(t==r)
    printf("palindrome");
    else
    printf("not palindrome");
return r;
}
void main()
{
    int n,p;
    printf("enter num");
    scanf("%d",&n);
    p=pali(n);
    printf("\npalindrome number is %d",p);
}