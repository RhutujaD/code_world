#include <iostream> 
using namespace std; 
int s[100], MaxSize, tos;

int push(int e)
{
  tos++;
  s[tos]=e;
}

int pop()
{
  int temp;
  temp = s[tos];
  tos--;
  return(temp);
}

void decToBin(int n)
{
  int rem, tos=-1, e;
    while(n!=0)
    {
      rem = n%2;
      push(rem);
      n=n/2;
    }  
}

int main() 
{ 
    int n,e ;
    cout<<"Enter a number:--";
    cin>>n;
    decToBin(n);
    while(tos!=0)
    {
      e=pop();
      cout<<e;
  }
    return 0; 
}