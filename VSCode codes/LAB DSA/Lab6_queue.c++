// Queue implementation in C++

#include <iostream>
#define SIZE 5

using namespace std;

class Queue {

    int items[SIZE], front, rear;

   public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if ((rear+1)%SIZE == front) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int element) {
        if (isFull()) {
            cout << "QUEUE IS FULL";
        } else {
            if (front == -1) front = 0;
            
            rear=(rear+1)%SIZE;
            items[rear] = element;
            cout << endl << "Inserted " << element << endl;
        }
    }

    int deQueue() {
        int element;
        if (isEmpty()) {
            cout << "QUEUE IS EMPTY" << endl;
            return (-1);
        } else {
            element = items[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            }
            else {
                front=(front+1)%SIZE;
            }
            cout << endl << "Deleted -> " << element << endl;
            return (element);
        }
    }

    void display() {
        int i;
        if (isEmpty()) {
            cout << endl << "Empty Queue" << endl;
        } else {
            cout << endl << "Front index-> " << front;
            cout << endl << "Items -> ";
            for (i = front; i != rear; i=(i+1)%SIZE)
                cout << items[i] << "  ";
            cout<<items[rear];
            cout << endl << "Rear index-> " << rear << endl;
    }
  }
};

int main() {
  Queue q;

//   q.deQueue();

  
//   q.enQueue(10);
//   q.enQueue(20);
//   q.enQueue(30);
//   q.enQueue(40);
//   q.enQueue(50);


//   q.display();

//   q.deQueue();

//   q.display();

    cout<<"\nCurrent Queue\n";
    q.display();
    // displayAll();

    while (true)
    {
        int choice,number;
        cout<<"\n\nEnter the Choice of operation you want to perform";
        cout<<"\n1 -- Enqueue";
        cout<<"\n2 -- Dequeue";
        cout<<"\n3 -- End the Code and Display Final List\n";
        
        cin>>choice;

        switch (choice)
        {
            case 1:
                cout<<"\nEnter the number you want to insert\n";
                cin>>number;
                q.enQueue(number);
                break;

            case 2:
                q.deQueue();
                break;

            case 3:
                q.display();
                goto out;

            default:
                cout<<"Wrong Choice No Change made";
        }
        q.display();
    }

    out:

  return 0;
}