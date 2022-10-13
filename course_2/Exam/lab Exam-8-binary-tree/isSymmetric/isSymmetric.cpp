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

void inOrderTraversal(Node *root, string &str)
{
    if(root==NULL) return;

    inOrderTraversal(root->leftChild, str);
    str+=to_string(root->value);
    inOrderTraversal(root->rightChild, str);
}

bool isSymmetric(Node * root)
{
    string str;
    inOrderTraversal(root, str);

    if((str.size())%2==0)
    {
        cout<<endl<<str.size()/2;
        return false;
    }
    else
    {
        for(int i=0,j=str.size()-1; i<j; i++,j--)
        {
            if(str[i]!=str[j]) return false;
        }
        return true;
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

    if(isSymmetric(root))cout<<"This tree is a symmetric tree."<<endl;
    else cout<<"This tree is not a symmetric tree."<<endl;

    return 0;
}
