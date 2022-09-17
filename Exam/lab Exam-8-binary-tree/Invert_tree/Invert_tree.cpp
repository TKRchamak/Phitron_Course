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

void printSpace(int level)
{
    for(int i=0; i<level; i++)
    {
        cout<<"    ";
    }
}

void printTreeNodes(Node *currRoot, int level)
{
    if(currRoot==NULL) return; //when the tree is empty

    if(currRoot->leftChild==NULL && currRoot->rightChild==NULL) //case 1
    {
        cout<<currRoot->value<<endl;
        return;
    }
    else //case 1
    {
        cout<<endl;
        printSpace(level);
        cout<<"Root: "<<currRoot->value<<endl;
    }

    if(currRoot->leftChild!=NULL)
    {
        printSpace(level);
        cout<<"Left: ";
        printTreeNodes(currRoot->leftChild, level+1);
    }

    if(currRoot->rightChild!=NULL)
    {
        printSpace(level);
        cout<<"Right: ";
        printTreeNodes(currRoot->rightChild, level+1);
    }

}

Node* invert_tree(Node * root)
{
    if(root==NULL) root;
    if(root->leftChild ==NULL && root->rightChild ==NULL) root;
    else
    {
        Node *tempNode = root->leftChild;
        root->leftChild = root->rightChild;
        root->rightChild=tempNode;
        invert_tree(root->leftChild);
        invert_tree(root->rightChild);
    }

    return root;
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

    printTreeNodes(invert_tree(root), 0);

    return 0;
}
