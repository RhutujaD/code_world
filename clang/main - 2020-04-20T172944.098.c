/*#include<stdio.h>//static:iitialize only once,default value is 0,persist value..//
void call();
void main()
{
    
    call();
    call();
    call();
    printf("\n bye");
}
void call()
{
    static int a=0;
    printf("\t %d",a);//012
    a++;
}*/
#include<stdio.h>
void call(int);
void main()
{
  static  int a=0;
    call(a);
    call(a);
    call(a);
    printf("\n bye");
}
void call(int a)
{
    printf("\t%d",a);//000
    a++;
}