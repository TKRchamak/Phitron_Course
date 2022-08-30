#include<bits/stdc++.h>
using namespace std;

template <typename N> class Node
{
public:
    N value;
    Node* next;
    Node(N val)
    {
        this->value=val;
        this->next=NULL;
    }
};

template <typename Q> class Queue
{
    Node <Q> *front;
    Node <Q> *rear;

public:
    Queue()
    {
        front=NULL;
        rear=NULL;
    }

//    enQueue-----push
    void push(Q value)
    {
        Node <Q> *newNode = new Node <Q> (value);
        if(front==NULL)
        {
            front=newNode;
            rear=newNode;
        }
        rear->next=newNode;
        rear=rear->next;
    }

//    deQueue-----pop
    Q pop(void)
    {
        Q returnValue;
        if(rear==NULL)
        {
            cout<<"The queue is empty"<<endl;
            return returnValue;
        }
        Node <Q> *delNode;
        delNode=front;
        front=front->next;
        if(front==NULL)
        {
            rear=NULL;
        }
        returnValue = delNode->value;
        delete delNode;
        return returnValue;
    }
//    top-----front / back
    Q Front()
    {
        Q val;
        val=front->value;
        return val;
    }

    Q Back()
    {
        Q val;
        val=rear->value;
        return val;
    }

//    empty
    bool empty()
    {
        if(front==NULL && rear==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }



};
