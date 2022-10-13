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

int main()
{
    Node *head = NULL;
    int n=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int val=0;
        cin>>val;
        if(val%2 ==0)
        {
            val=-1;
        }

        Node *newNode = new Node(val);
        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            Node *temp=head;
            while(temp->next !=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }

    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value;
        if(temp->next!=NULL)
        {
            cout<<"->";
        }
        temp=temp->next;
    }

    return 0;
}
