#include<stdio.h>
void main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		printf("enter array elements");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	getche();
}
