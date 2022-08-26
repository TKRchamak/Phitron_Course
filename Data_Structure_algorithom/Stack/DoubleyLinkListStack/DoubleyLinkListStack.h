#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* prev;
    Node* next;

    Node(int val)
    {
        value=val;
        prev=NULL;
        next=NULL;
    }
};

class Stack
{
    Node *head;
    Node *top;
    int len;

public:
    Stack()
    {
        head=NULL;
        top=NULL;
        len=0;
    }

    //push
    void push(int val)
    {
        Node *newNode= new Node(val);
        if(head==NULL)
        {
            head=top=newNode;
            len++;
            return;
        }
        else
        {
            top->next=newNode;
            newNode->prev=top;
            top=newNode;
            len++;
        }
    }

    //pop
    int pop()
    {
        Node *delNode= top;
        int returnValue=delNode->value;
        if(head==top)
        {
            head=top=NULL;
            return returnValue;
        }
        else
        {
            top=top->prev;
            top->next=NULL;
        }
        delete delNode;
        len--;
        return returnValue;
    }

    //top-element
    int topElement()
    {
        if(head==NULL)
        {
            return -1;
        }
        else
        {
            return top->value;
        }
    }

    //size
    int sizeOfStack()
    {
        return len;
    }

    //empty
    bool detectEmpty()
    {
        if(head==NULL) return true;
        else return false;
    }
};

