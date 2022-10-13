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
    int n=0, countNo=0;
    cin>>n;

    int tempArr[n+1]= {0};
    for(int i=1; i<=n; i++)
    {
        cin>>tempArr[i];
    }

    cin>>countNo;


    int i=1;
    while(i<=n)
    {
        if((i+countNo-1)%countNo==0 && (i+countNo-1)<=n)
        {
            int ItempMax=(i+countNo-1), ItempMin=i;
            while(ItempMin<ItempMax)
            {
                int tempCurr= tempArr[ItempMax];
                tempArr[ItempMax]=tempArr[ItempMin];
                tempArr[ItempMin]=tempCurr;
                ItempMin++;
                ItempMax--;
            }
            i=i+countNo;
        }
        else if((i+countNo-1)>n)
        {
            int ItempMax=n, ItempMin=i;
            while(ItempMin<ItempMax)
            {
                int tempCurr= tempArr[ItempMax];
                tempArr[ItempMax]=tempArr[ItempMin];
                tempArr[ItempMin]=tempCurr;
                ItempMin++;
                ItempMax--;
            }
            i=i+n;
        }
    }

    for(int i=1; i<=n; i++)
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
