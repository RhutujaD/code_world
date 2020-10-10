#include<stdio.h>
int main()
{
int n;
printf("enter number between 1 to 4");
scanf("%d",&n);
switch(n)
{
case 1:printf("I'm in case 1");
break;
case 2:printf("I'm in case 2");
break;
case 3:printf("I'm in case 3");
break;
case 4:printf("i'm in case 4");
break;
default:printf("i'm gone case");
}
printf("\n bye");
getch();
return 0;
}