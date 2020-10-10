#include<stdio.h>
int add(int,int);
void main()
{
    int a,b,c;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("\n %d",c);
}
int add(int x,int y)
{
  int s;
  s=x+y;
  return s;
}