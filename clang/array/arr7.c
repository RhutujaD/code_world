#include<stdio.h>
void main()
{
int arr[5],i,min;
printf("enter array elements");
for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    min=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }


printf("\n lowest element is:%d",min);
getche();
}
