#include<stdio.h>
int main()
{
    int i=3;
    int *j;
    j=&i;
    printf("\n address of i=%u",&i);
    printf("\n value of i=%d",i);
    printf("\n value of *(&j)=%d",*(&j));
    printf("\n address of j=%u",&j);
    printf("\n value of j=%u",j);
    printf("\n value of j=%d",j);
    printf("\n value of j=%u",*j);
    printf("\n %d",**(&j));
    *j=9;
    printf("%d",i);
}