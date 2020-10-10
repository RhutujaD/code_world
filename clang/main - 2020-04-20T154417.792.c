#include<stdio.h>
int main()
{
    int q,p=1;
    q=3;
    printf("%d\t %d\t %d",p++,++p,p++);
    printf("\n %d",q++*++q*++q);
    getch();
    return 0;
}