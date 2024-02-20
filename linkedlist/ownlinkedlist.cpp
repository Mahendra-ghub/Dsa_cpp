#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this -> data = data;
        this -> next = null;
    }
}; 

void insertAtHead(Node* &head, int data)
{
    node* temp=head;
}

void display(node* &head)
{
    node* temp=head;
    while(temp!=null)
    {
        cout<<temp -> data <<" ->";
        temp = temp->next;
    }
    cout<<"null";
}
int main()
{
    node* head = null;
    node* node1 = new node(1);
    head = node1;
    head -> next =node1;
    node* node2 = new node(2);
    node1->next = node2;
    node2 ->next = null;
    insertAtHead(head,12);
    display(head);
}

//d1