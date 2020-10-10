#include<stdio.h>
void main()
{
    int arr[5],max,i;
   printf("array elemennts are");
   for(i=0;i<5;i++)
       scanf("%d",&arr[i]);
       max=arr[0];
       for(i=0;i<5;i++)
       {
       if(arr[i]>max)
        max=arr[i];

        }
    printf("highest element in an array is:%d",max);

   getche();
}
