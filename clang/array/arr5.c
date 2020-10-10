#include<stdio.h>
void main()
{
int arr[5],srr[5],i;
for(i=0;i<5;i++)
{
printf("enter arr elements");
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
srr[i]=arr[i]*arr[i];
printf("\nsrr is:%d",srr[i]);
}
getche();
}
