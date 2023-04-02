#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
} *front = NULL,*rear = NULL;

void displayAll(){
    if(front == NULL){
        cout<<"EMPTY QUEUE\n";
    }
    else
    {
        Node * ptr = front;
        cout<<ptr->data<<" -> ";
        ptr = ptr -> next;
        while (ptr!=front)
        {
            if(ptr!=front)
                cout<<ptr->data<<" -> ";
            ptr=ptr->next;
        }    
    }
    
}


void enQueue(int val){

    Node * new_node = new Node();
    new_node -> data = val;
    new_node -> next = front;

    
    if(front == NULL){
        front = new_node;
        rear = new_node;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
        rear->next = front;
    }
    
}

void deQueue(){

    if(front == NULL){
        cout<<"--UNDERFLOW--\n";
    }
    else if(front == rear){
        Node *temp = front;
        front = NULL;
        rear = NULL; 
        delete(temp);
    }
    else{
        Node * temp = front;
       
       front = front->next;
       rear->next = front;
        
        delete(temp);
    }
}

int main()
{

    Node * new_node = new Node();

    new_node->data = 10;
    front = new_node;
    rear = new_node;
    new_node->next = new_node;
    
    int choice, number;

    cout<<"\nCurrent Queue\n";
    displayAll();

    while (true)
    {
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
                enQueue(number);
                break;

            case 2:
                deQueue();
                break;

            case 3:
                displayAll();
                goto out;

            default:
                cout<<"Wrong Choice No Change made\n";
        }
        displayAll();
    }

    out:

    return 0;
}