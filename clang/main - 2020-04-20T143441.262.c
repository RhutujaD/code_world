#include<stdio.h>
int main()
{
    int n,i,cp=0,cn=0;
     for(i=1;i<=5;i++)
     {
    printf("\n enter numbers");
     scanf("%d",&n);
        if(n<0)
        {
            printf("\tnegative numbers");
            cn++;
            continue;
        }
        else if(n>0)
        {
            printf("\tpositive numbers");
            cp++;
        }
        printf("\n positive number count is %d",cp);
        printf("\n negative number count is %d",cn);
}
    
    getch();
    return 0;
}