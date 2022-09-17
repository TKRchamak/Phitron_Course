#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *leftChild;
    Node *rightChild;

    Node(int value)
    {
        this->value=value;
        this->leftChild=NULL;
        this->rightChild=NULL;
    }

};


void level_order_reverse(Node * root)
{
    if(root==NULL) return;

    int level=1;
    queue<Node *> q;
    stack<Node *> s;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node *currNode = q.front();
        q.pop();
        if(currNode!=NULL)
        {
            q.push(currNode);
            if(currNode->rightChild!=NULL)
            {
                q.push(currNode->rightChild);
            }
            if(currNode->leftChild!=NULL)
            {
                q.push(currNode->leftChild);
            }
        }
        else
        {
            if(!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
    }

    while(!s.empty())
    {
        Node *currNode=s.top();
        s.pop();
        cout<<currNode->value<<" ";
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

    invert_tree(root);

    return 0;
}
