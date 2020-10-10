#include<stdio.h>//printing 1-5 using recursion//
void call(int n)
{
    if(n==1)
    return;
    --n;
    call(n);
    printf("\t%d",n);
}
int main()
{
    int no=6;
    call(no);
    getch();
    return 0;
}