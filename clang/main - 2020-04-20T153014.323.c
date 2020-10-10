/*#include<sdtio.h>
int main()
{
    int n=5;
    do{
        printf("number is %d",n);
        n++;
    }while(n<4);
    getch();
    return 0;
    
}*/
/*#include<stdio.h>
int main()
{
    int n,s=0;
    do{
         printf("enter number");
    scanf("%d",&n);
      s=s+n;
    }while(n>0);
  printf("sum is %d",s);
    }
}*/
#include<stdio.h>
int main()
{
    int n,p=1;
    do{
        
        printf("enter number");
        scanf("%d",&n);
        if(n!=0)
        p=p*n;
        }while(n>0);
      printf("product is %d",p);
      getch();
    return 0;
}