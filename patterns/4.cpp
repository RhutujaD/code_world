#include<iostream>
using namespace std;

int main()
{
	int i,j,k,d;
	for(i=1;i<=5;i++)
	{
		for(j=4;j>=i;j--)
		{
			cout<<" ";
    	}
	    d=i;	
		for(k=1;k<=i;k++)
	    {
	    	cout<<d;
	    	d--;
		}
		cout<<"\n";
	}
}
