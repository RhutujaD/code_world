#include<stdio.h>
void call(int n)
{
    if(n==5)
    return;
    ++n;
    call(n);
    printf("%d\t",n);
}
int main()
{
    int no=0;
    call(no);
    getch();
    return 0;
}