#include<bits/stdc++.h>
using namespace std;

//Node <int> myNode
template <typename N> class Node
//class Node
{
public:
    N value;
    Node* prev;
    Node* next;

    Node(N val)
//    Node(int val)
    {
        value=val;
        prev=NULL;
        next=NULL;
    }
};

template <typename S> class Stack
{
    Node <S> *head;
    Node <S> *top;
    int len;

public:
    Stack()
    {
        head=NULL;
        top=NULL;
        len=0;
    }

    //push
    void push(S val)
    {
        Node <S> *newNode= new Node <S> (val);
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
    S pop()
    {
        Node <S> *delNode= top;
        S returnValue=delNode->value;
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
    S topElement()
    {
        if(head==NULL)
        {
            return NULL;
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

