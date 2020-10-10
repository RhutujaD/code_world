#include <iostream>

using namespace std;

class queue {
    int queue1[5];
    int rear, front;

public:
    queue()//To Initalize queue
    {
        rear = -1;
        front = -1;
    }
    void insert(int x)
    {
        if (rear > 4)
		 {  //To check queue is full or not
            cout << "queue over flow";
            front = rear = -1;
            return;
        }
        queue1[++rear] = x;  //add element in queue
        cout << "inserted " << x;
    }

    void delet()
    {
        if (front == rear)//To check queue is empty or not
		 {
            cout << "queue under flow";
            return;
        }
        cout << "deleted " << queue1[++front]; //delet element in queue
    }

    void display()
    {
        if (rear == front) {//to check queue is empty 
            cout << " queue empty";
            return;
        }
        for (int i = front + 1; i <= rear; i++) //print the element in queue
            cout << queue1[i] << " ";
    }
};

int main()
{
    int ch;
    queue q;
    while (1) 
	{
        cout << "\n1.insert 2.delet 3.display 4.exit\nEnter ur choice: "; cin >> ch;
        switch (ch)
		 {
        case 1:
            cout << "enter the element: ";
			 cin >> ch;
            q.insert(ch);
            break;
        case 2:
            q.delet();
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit(0);
        }
    }
}
