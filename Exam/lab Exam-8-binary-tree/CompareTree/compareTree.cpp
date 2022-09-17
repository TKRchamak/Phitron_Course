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

void level_order(Node* root)
{
    if(root==NULL) return;

    cout<<root->value<<" ";
    queue<Node *>q;


}

void preOrderTraversalFunc(Node *root, string &str)
{
    if(root==NULL)return;

//    cout<<root->value<<" ";
    str+=to_string(root->value);
    preOrderTraversalFunc(root->leftChild, str);
    preOrderTraversalFunc(root->rightChild, str);
}

bool isSame(Node* root1, Node* root2)
{
    string preOrderForNode1, preOrderForNode2;
    preOrderTraversalFunc(root1, preOrderForNode1);
    preOrderTraversalFunc(root2, preOrderForNode2);

    if(preOrderForNode1==preOrderForNode2) return true;
    else return false;
}

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
    cout<<endl;
    printTreeNodes(root,0);
    cout<<endl;


    int b;
    cin>>b;
    Node *rootB= new Node(b);
    queue<Node *> qB;
    qB.push(rootB);

    while(!qB.empty())
    {
        Node * currNode = qB.front();
        qB.pop();

        int left, right;
        cin>>left>>right;

        Node *leftNode = new Node(left);
        Node *rightNode = new Node(right);

        if(left!=-1)
        {
            currNode->leftChild=leftNode;
            qB.push(leftNode);
        }
        if(right!=-1)
        {
            currNode->rightChild=rightNode;
            qB.push(rightNode);
        }
    }

    cout<<endl;
    printTreeNodes(rootB,0);
    cout<<endl;


    if(isSame(root, rootB))
    {
        cout<<"These two binary trees are the same"<<endl;
    }
    else
    {
        cout<<"These two binary trees are not the same"<<endl;
    }

    return 0;
}
