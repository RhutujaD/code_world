#include<stdio.h>
int main()
{
    int a,*p;
    a=5;
    p=&a;
    printf("%d",(*p)++);//5
    printf("\n%d",*p++);//6
    printf("\n %u",p);//addr of p
    printf("%d\n",++(*p));
    printf("%d\t",*++p);//
    printf("%u\t",p);
    getch();
    return 0;
}