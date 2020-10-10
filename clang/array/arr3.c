#include<stdio.h>
void main()
{
int arr[5],i,s=0;
for(i=0;i<5;i++)
{
printf(" enter the elements");
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
    s+=arr[i];

//}
//for(i=0;i<5;i++)
//{
printf("\nsum is %d",s);
}
getche();
}
