#include<stdio.h>
void main()
{
int arr[5],cpy[5],i;
for(i=0;i<5;i++)
{
printf("accept elements in original array");
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
    cpy[i]=arr[i];
}
for(i=0;i<5;i++)
{
    printf("\n in cpy array elements are:%d",cpy[i]);
}
getche();
}
