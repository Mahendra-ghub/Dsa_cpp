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
        this -> next = nullptr;
    }
}; 

void insertAtHead(node* &head, int data)
{
    node* newNode = new node(data);
    newNode->next = head;
    head = newNode;
}

void display(node* head)
{
    node* temp = head;
    while(temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null";
}

int main()
{
    node* head = nullptr;
    node* node1 = new node(1);
    head = node1;
    node* node2 = new node(2);
    node1->next = node2;
    insertAtHead(head, 12);
    display(head);
    return 0;
}


//d1