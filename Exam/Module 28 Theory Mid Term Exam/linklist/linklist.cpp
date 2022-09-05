#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

void indesrtAtTail(int val, Node *&head)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *temp = head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}


void indesrtAtSpesificPoint(int val,int fastPoint, int secPoint, Node *&head)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    Node *temp = head;
    while(temp->next->next!=NULL || (temp->value!=fastPoint && temp->next->value!=secPoint))
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        cout<<"Insert Not possible"<<endl;
    }
    else
    {
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

void deleteANum(int val, Node *&head)
{
    Node *temp = head;
    if(temp==NULL)
    {
        cout<<"This list is empty"<<endl;
        return;
    }
    else if(temp->value == val)
    {
        Node *deleteNode = head;
        head=temp->next;
        delete deleteNode;
        return;
    }

    while(temp!=NULL)
    {
        if(temp->next->value==val)
        {
            break;
        }
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}

void makeACycle(Node *&head)
{
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
}


void printList(Node *&head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }
}


int main()
{
    Node *head =NULL;
    indesrtAtTail(14, head);
    indesrtAtTail(25, head);
    indesrtAtTail(33, head);
    indesrtAtTail(47, head);

//    deleteANum(25, head);

//    indesrtAtSpesificPoint(40, 33, 47,head);

    makeACycle(head);

    printList(head);
    return 0;
}
