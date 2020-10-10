#include<stdio.h>
float circle(int r)
{
 float area;
 if(r!=0)
 {
 area=3.14*(r*r);
 }
 return area;
}
void main()
{
    int r;
    float c;
    printf("enter radius");
    scanf("%d",&r);
    c=circle(r);
    printf("area is %f",c);
}