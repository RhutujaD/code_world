#include<stdio.h>
void main()
{

    int arr[5],grr[5],crr[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter array1 elements");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nenter array2 elements");
        scanf("\t%d",&grr[i]);

    }
    for(i=0;i<5;i++)
    {
        crr[i]=arr[i]+grr[i];
        printf("\nelements in crr are:%d",crr[i]);
    }
    getch();

}
