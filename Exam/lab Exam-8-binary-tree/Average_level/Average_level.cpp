#include<bits/stdc++.h>
#include<stdbool.h>
using namespace std;

class Node
{
public:
    int value;
    Node * leftChild;
    Node * rightChild;

    Node(int value)
    {
        this->value=value;
        this->leftChild=NULL;
        this->rightChild=NULL;
    }
};


void average_level(Node* root)
{
    if(root==NULL) return;

    int sum=0, eCount=0, level=0;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {
        Node *currNode = q.front();
        q.pop();


        if(currNode!=NULL)
        {
            sum+=currNode->value;
            eCount++;

            if(currNode->leftChild!=NULL)
            {
                q.push(currNode->leftChild);
            }
            if(currNode->rightChild!=NULL)
            {
                q.push(currNode->rightChild);
            }
        }
        else
        {
            float val=(float)sum/ (float)eCount;
            cout<<val<<" ";
            sum=0;
            eCount=0;

            if(!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
    }
}

int main()
{
    int a;
    cin>>a;
    Node *root= new Node(a);
    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node * currNode = q.front();
        q.pop();

        int left, right;
        cin>>left>>right;

        Node *leftNode = new Node(left);
        Node *rightNode = new Node(right);

        if(left!=-1)
        {
            currNode->leftChild=leftNode;
            q.push(leftNode);
        }
        if(right!=-1)
        {
            currNode->rightChild=rightNode;
            q.push(rightNode);
        }
    }

    average_level(root);
    return 0;
}
