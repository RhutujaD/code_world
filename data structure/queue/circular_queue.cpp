#include <iostream>
using namespace std;

int CQ[5];
int front = 0, rear = -1, size=5,cnt=0;

//insert into Queue.
void enqueue(int e)
{
	rear=(rear+1)%size;
	cnt++;
	CQ[rear]=e;	
}

//remove from Queue
int dequeue()
{
	int temp;
	cnt--;
	temp=CQ[front];
	front=(front+1)%size;
	return (temp);
}

//check is Queue Full?
int isFull()
{
	if(cnt==size)
	return 1;
	else
	{
		return 0;
	}
}
//check is Queue Empty?
int isEmpty()
{
	if(cnt==0)
	return 1;
	else
	{
		return 0;
	}
}
// print all elements from Circular Queue.
void PrintCQ()
{
	int c=0,i=front;
	while(c<cnt)
	{
		cout<<CQ[i];
		i=(i+1)%size;
		c=c+1;
	}
}


int main() {

   int ch, val;
   cout<<"1)Insert\n";
   cout<<"2)Delete\n";
   cout<<"3)Display\n";
   cout<<"4)Exit\n";
   do {
      cout<<"Enter choice : "<<endl;
      cin>>ch;
      
      switch(ch) 
	  {
         case 1:
         	if(isFull()==1)
         	{
         		cout<<"full"<<endl;
			 }
			 else
			 {
			 	 cout<<"Input for insertion: "<<endl;
         			cin>>val;
         			enqueue(val);
			 }
        
         break;

         case 2:
         	if(isEmpty()==1)
         	cout<<"empty"<<endl;
			 else
			 {
			 	dequeue();	
			 }
         
         break;

         case 3:
         	if(isEmpty()==1)
         	cout<<"empty"<<endl;
         	else
         	{
         		PrintCQ();
			 }
         
         break;

         case 4:
         cout<<"Exit\n";
         break;
         default: cout<<"Incorrect!\n";
      }
   } while(ch != 4);
   return 0;
}
