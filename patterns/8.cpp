#include<iostream>
using namespace std;

int main()
{
	int i,k;
	for(i=1;i<=7;i++)
	{
		for(k=1;k<=i;k++)
		{
			int r=k%2;
			cout<<r;
		}
		cout<<"\n";
	}
	return 0;
}
