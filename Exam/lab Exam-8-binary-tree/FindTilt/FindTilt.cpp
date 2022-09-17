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


void sumOfTree(Node *root, int &sum)
{
    if(root==NULL)return;
    sum+=root->value;
    sumOfTree(root->leftChild, sum);
    sumOfTree(root->rightChild, sum);
}

int findTilt(Node * root)
{
    if(root==NULL) return -1;

    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        vector<int> v;
        Node *currNode = q.front();
        q.pop();

        if(currNode->leftChild!=NULL)
        {
            q.push(currNode->leftChild);
        }
        if(currNode->rightChild!=NULL)
        {
            q.push(currNode->rightChild);
        }

        if(currNode->leftChild==NULL && currNode->rightChild==NULL)
        {
            currNode->value=0;
        }
        else
        {
            int tilt, leftSum=0, rightSum=0;
            if(currNode->leftChild==NULL)
            {
                leftSum=0;
            }
            else
            {
                sumOfTree(currNode->leftChild, leftSum);
            }

            if(currNode->rightChild==NULL)
            {
                rightSum=0;
            }
            else
            {
                sumOfTree(currNode->rightChild, rightSum);
            }
            tilt=leftSum-rightSum;
//            cout<<tilt<<"="<<leftSum<<"-"<<rightSum<<endl;
            if(tilt<0)
            {
                tilt=tilt*(-1);
            }
            currNode->value=tilt;
        }
    }

    int sumOfTilt=0;
    sumOfTree(root, sumOfTilt);

    return sumOfTilt;
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

    cout<<findTilt(root)<<endl;
//    printTreeNodes(root,0);
    return 0;
}
