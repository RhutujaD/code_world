#include<stdio.h>
void fact(int n)
{
  int f,i;
  if(n==0)
  return;
  if(n>0)
  {
      f=1;
      for(i=1;i<=n;i++)
          f=f*i;
      
      
  }
  printf("%d\t",f);
  

    
}
int main()
{
    int no;
    printf("enter number");
    scanf("%d",&no);
    fact(no);
    getch();
    return 0;
}