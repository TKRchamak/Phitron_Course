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

void levelOrderTraversal(Node * root)
{
    if(root==NULL) return;

    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node *currNode = q.front();
        q.pop();
        cout<<currNode->value<<" ";
        if(currNode->leftChild!=NULL)
        {
            q.push(currNode->leftChild);
        }
        if(currNode->rightChild!=NULL)
        {
            q.push(currNode->rightChild);
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


    levelOrderTraversal(root);

    return 0;
}
