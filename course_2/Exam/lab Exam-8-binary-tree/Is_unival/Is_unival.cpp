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


bool is_unival(Node * root)
{
    if(root==NULL) return false;

    queue<Node *> q;
    q.push(root);

    int setVal= root->value;

    while(!q.empty())
    {
        Node *currNode = q.front();
        q.pop();
        if(currNode!=NULL)
        {
            if(setVal!=currNode->value) return false;

            if(currNode->rightChild!=NULL)
            {
                q.push(currNode->rightChild);
            }
            if(currNode->leftChild!=NULL)
            {
                q.push(currNode->leftChild);
            }
        }
    }
    return true;
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

    if(is_unival(root))
    {
        cout<<"This is an uni-valued tree."<<endl;
    }
    else
    {
        cout<<"This is not an uni-valued tree."<<endl;
    }

    return 0;
}
