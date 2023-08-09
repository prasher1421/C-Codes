#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
} *start = NULL;

void displayAll(){
    if(start == NULL){
        cout<<"EMPTY LIST\n";
    }
    else
    {
        Node * ptr = start;
        cout<<ptr->data<<" -> ";
        ptr = ptr -> next;
        while (ptr!=start)
        {
            ptr=ptr->next;
            cout<<ptr->data<<" -> ";
        }    
    }
    
}

void insertAtBeginning(int val){
    
    Node * new_node = new Node();
    new_node -> data = val;
    new_node -> next = start;

    Node * ptr=start;
    while (ptr->next!=start)
    {
      ptr=ptr->next;
    }
    ptr->next = new_node;
    
    start = new_node;

}

void insertAtEnd(int val){

    Node * new_node = new Node();
    new_node -> data = val;
    new_node -> next = start;

    Node * ptr = start;
    if(start == NULL){
        start = new_node;
    }
    else
    {
        while (ptr->next != start)
        {
            ptr = ptr -> next;
        }
    }
    ptr -> next = new_node;
}

void deleteAtBeginning(){

    if(start == NULL){
        cout<<"--UNDERFLOW--\n";
    }
    else{
        Node * temp = start;
        if (start->next=start)
        {
           start=NULL;
        }
        else
        {
          while (temp->next!=start)
          {
            temp=temp->next;
          }
          start=start->next;
          temp->next=start;
        }
        
        delete(temp);
    }
}

void deleteAtEnd(){

    if(start == NULL){
        cout<<"--UNDERFLOW--\n";
    }
    else{
        Node * ptr = start;
        Node * pre_ptr = NULL;
        if (start->next==start)
        {
            start=NULL;
        }
        else
        {
            while (ptr->next!=start)
            {
               pre_ptr=ptr;
            ptr=ptr->next;
            }
            
            pre_ptr->next=start;
        }


        delete(ptr);
    }
}

int main()
{

    Node * new_node = new Node();

    new_node->data = 10;
    start = new_node;
    new_node->next = new_node;
    
    int choice, number;

    cout<<"\nCurrent List\n";
    displayAll();

    while (true)
    {
        cout<<"\n\nEnter the Choice of operation you want to perform";
        cout<<"\n1 -- Insert at the beginning";
        cout<<"\n2 -- Insert at the end";
        cout<<"\n3 -- Delete at the beginning";
        cout<<"\n4 -- Delete at the end";
        cout<<"\n5 -- End the Code and Display Final List\n";
        
        cin>>choice;

        switch (choice)
        {
            case 1:
                cout<<"\nEnter the number you want to insert\n";
                cin>>number;
                insertAtBeginning(number);
                break;

            case 2:
                cout<<"\nEnter the number you want to insert\n";
                cin>>number;
                insertAtEnd(number);
                break;

            case 3:
                deleteAtBeginning();
                break;

            case 4:
                deleteAtEnd();
                break;

            case 5:
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