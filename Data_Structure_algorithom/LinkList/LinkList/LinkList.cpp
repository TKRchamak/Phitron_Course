#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

void insertValueAtTail(Node* &head, int value) // Node*---->pointer type.  &head----->address.
{
    Node* newNode = new Node(value); // create a node in the address of newNode & assign a value in the newNode er address er node a
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertValueAtHead(Node* &head, int value)
{
    Node* newNode = new Node(value);
    newNode->next=head;
    head=newNode;
}

void printLinkList(Node *head)
{
    Node* n=head;
    while(n!=NULL)
    {
//        cout<<n->value<<"----"<<n->next<<endl;
        cout<<n->value;
        if(n->next!=NULL)cout<<"--";
        n=n->next;
    }
}

int main()
{
//    Node* head = new Node();  // create a node without constrator
//    Node* second = new Node();
//    Node* third = new Node();
//    Node* forth = new Node();
//
//    head->value = 4;3
//    second->value = 8;
//    third->value = 11;
//    forth->value = 22;
//
//    head->next = second;
//    second->next = third;
//    third->next = forth;
//    forth->next = NULL;




//    Node *head=NULL; // Node----->create a node & *head--->create a address for a node;
//    insertValue(head, 5);
//    insertValue(head, 8);
//    insertValue(head, 9);
//    insertValue(head, 60);


    Node *head=NULL; // Node----->create a node & *head--->create a address for a node;
    int n;
    char choose = 'Y';
    while(choose=='Y')
    {
        cout<<"Input value : ";
        cin>>n;
//        insertValueAtTail(head, n);
        insertValueAtHead(head, n);
        cout<<"Are you want to take input again : (Y/N)";
        cin>>choose;
    }

    printLinkList(head);

    return 0;
}
