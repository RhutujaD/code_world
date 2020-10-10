#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
           // printf("\n %d",c);
            
        }
        
        
    }
     printf("\n %d",c);
    
    return 0;
}
