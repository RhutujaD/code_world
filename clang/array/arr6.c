#include<stdio.h>
void main()
{
int arr[5],srr[5],i;
printf("enter arr elements");
for(i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
    srr[i]=arr[i]*arr[i];
    //(correct)printf("\nsrr elements are: %d",srr[i]);
}
for(i=0;i<5;i++)
{
     printf("\nsrr elements are: %d",srr[i]);
}
getche();
}
