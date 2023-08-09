#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
} *top = NULL;

void displayAll(){
    if(top == NULL){
        cout<<"EMPTY STACK\n";
    }
    else
    {
        Node * ptr = top;
        while (ptr!=NULL)
        {
            cout<<ptr->data<<" -> ";
            ptr=ptr->next;
        }    
    }
    
}

int peek(){
    if(top == NULL){
        return 0;
    }
    else
    {
        return top->data;  
    }
    
}

void push(int val){
    
    Node * new_node = new Node();
    new_node -> data = val;
    
    new_node -> next = top;
    top = new_node;

}

void pop(){

    if(top == NULL){
        cout<<"--UNDERFLOW--\n";
    }
    else{
        Node * temp = top;
        top = top->next;

        delete(temp);
    }
}


int main()
{

    Node * new_node = new Node();

    new_node->data = 10;
    new_node->next = NULL;
    top = new_node;
    
    int choice, number;

    cout<<"\nCurrent Stack\n";
    displayAll();

    while (true)
    {
        cout<<"\n\nEnter the Choice of operation you want to perform";
        cout<<"\n1 -- Push to Stack";
        cout<<"\n2 -- Peek";
        cout<<"\n3 -- Pop";
        cout<<"\n4 -- End the Code and Display Final Stack\n";
        
        cin>>choice;

        switch (choice)
        {
            case 1:
                cout<<"\nEnter the character you want to push\n";
                cin>>number;
                push(number);
                break;

            case 2:
                cout<<peek()<<endl;
                break;

            case 3:
                pop();
                break;

            case 4:
                displayAll();
                goto out;

            default:
                cout<<"\nWrong Choice no Change made";
        }
        displayAll();
    }

    out:

    return 0;
}