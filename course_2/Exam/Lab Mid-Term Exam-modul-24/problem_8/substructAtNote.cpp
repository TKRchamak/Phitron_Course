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
    int n=0, gap=0, toPoint=0;
    cin>>n>>gap>>toPoint;

    int tempArr[n+1]= {0};
    int selectedPoin=gap;
    for(int i=1; i<=n; i++)
    {
        cin>>tempArr[i];
    }

    for(int i=1; i<=n; i++)
    {
        if(i>selectedPoin && i<=(selectedPoin+toPoint))
        {
            tempArr[i]=-1;
            if(i==(selectedPoin+toPoint))
            {
                selectedPoin=selectedPoin+gap+toPoint;
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(tempArr[i]!= -1)
        {
            Node *newNode = new Node(tempArr[i]);
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
