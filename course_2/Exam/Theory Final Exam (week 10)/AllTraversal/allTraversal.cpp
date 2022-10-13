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

void inOrderTraversalFunc(Node *currRoot)
{
    if(currRoot==NULL)return;

    inOrderTraversalFunc(currRoot->leftChild);
    cout<<currRoot->value<<" ";
    inOrderTraversalFunc(currRoot->rightChild);
}

void preOrderTraversalFunc(Node *currRoot)
{
    if(currRoot==NULL)return;

    cout<<currRoot->value<<" ";
    preOrderTraversalFunc(currRoot->leftChild);
    preOrderTraversalFunc(currRoot->rightChild);
}

void postOrderTraversalFunc(Node *currRoot)
{
    if(currRoot==NULL)return;

    postOrderTraversalFunc(currRoot->leftChild);
    postOrderTraversalFunc(currRoot->rightChild);
    cout<<currRoot->value<<" ";
}

void levelOrderTraversal(Node * root)
{
    if(root==NULL) return;
    int level = 0;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node *currNode = q.front();
        q.pop();
        if(currNode==NULL)
        {
            if(!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
        else
        {
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

    cout<<level<<endl;
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
