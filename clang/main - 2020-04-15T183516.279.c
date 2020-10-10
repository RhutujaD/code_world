/*#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        if(i==3)
        break;
        printf("\t %d",i);//12
    }
    printf("\n %d",i);//3
    return 0;
}*/
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        if(i==3)
        continue;
        printf("\t %d",i);//1245
    }
    printf("\n %d",i);//6
    return 0;
}