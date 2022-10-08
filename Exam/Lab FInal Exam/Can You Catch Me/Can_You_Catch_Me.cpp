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

int ans = 0;

void checkPalindrom(int ints[], int len, string str)
{
    int temp = 1;
    for (int i=0, j=len-1; i <= j; i++, j--)
    {
        cout<<str[ints[i]] <<" | "<< str[ints[j]]<<endl;
        if(str[ints[i]] != str[ints[j]])
        {
            temp=-1;
            break;
        }
    }
    if(temp == 1) ans++;
}

void printPathsRecur(Node* node, int path[], int pathLen, string str)
{
    if (node == NULL)
        return;

    /* append this node to the path array */
    path[pathLen] = node->value;
    pathLen++;

    /* it's a leaf, so print the path that lead to here */
    if (node->leftChild == NULL && node->rightChild == NULL)
    {
        checkPalindrom(path, pathLen, str);
    }
    else
    {
        /* otherwise try both subtrees */
        printPathsRecur(node->leftChild, path, pathLen, str);
        printPathsRecur(node->rightChild, path, pathLen, str);
    }
}

void findPalindromPath(Node* node, string str)
{
    int path[1000];
    printPathsRecur(node, path, 0, str);
}

int main()
{
    string str;
    cin>>str;

    int a;
    cin>>a;

    Node * root = new Node(a);

    vector<Node *> v;
    v.push_back(root);

    while(!v.empty())
    {
        Node * currNode = v.front();
        v.erase(v.begin());

        int left, right;
        cin>>left>>right;

        Node *leftNode = new Node(left);
        Node *rightNode = new Node(right);

        if(left!=-1)
        {
            currNode->leftChild=leftNode;
            v.push_back(leftNode);
        }
        if(right!=-1)
        {
            currNode->rightChild=rightNode;
            v.push_back(rightNode);
        }
    }

//    printPaths(root);
    findPalindromPath(root, str);
    cout<<ans;

    return 0;
}
