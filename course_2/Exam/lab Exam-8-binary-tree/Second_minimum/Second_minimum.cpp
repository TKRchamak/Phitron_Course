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


int second_minimum(Node * root)
{
    if(root==NULL || (root->leftChild==NULL && root->rightChild==NULL)) return -1;

    int fastMin=root->value, secondMIn=-1;

    queue<Node *> q;
    vector<int> v;
    q.push(root);

    while(!q.empty())
    {
        Node *currNode = q.front();
        q.pop();
        if(currNode!=NULL)
        {
            if(currNode->value<fastMin)
            {
                secondMIn=fastMin;
                fastMin=currNode->value;
            }else if(currNode->value>fastMin && secondMIn==-1)
            {
                secondMIn=currNode->value;
            }else if(currNode->value>fastMin && currNode->value<secondMIn)
            {
                secondMIn=currNode->value;
            }

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

    return secondMIn;
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

    cout<<second_minimum(root)<<endl;

    return 0;
}
