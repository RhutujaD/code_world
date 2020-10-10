#include <iostream>
using namespace std; 
int s[100], MaxSize, tos, str;

int push(char e)
{
 tos++;
 s[tos]=e;
}

int pop()
{
 char temp;
 temp = s[tos];
 tos--;
 cout<<"\t"<<temp;
 //return(temp);
}

int main() 
{
 string str;
 char i;
 cout<<"enter string:--";
 cin>>str;
 int len=str.length();
 for(i=0; i<len; i++)
 push(str[i]);
 for(i=0; i<len; i++)
 str[i]=pop();
 return 0;
}