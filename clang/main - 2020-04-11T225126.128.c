#include<stdio.h>
float peri(int r)
{
    float p;
    if(r!=0)
    {
        p=2*(3.14*r);
    }
    return p;
}
void main()
{
    int r;
    float e;
    printf("enter radius");
    scanf("%d",&r);
    e=peri(r);
    printf("perimeter is %f",e);
}