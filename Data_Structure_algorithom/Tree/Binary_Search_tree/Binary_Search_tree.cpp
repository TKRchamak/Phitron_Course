#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int value;
    TreeNode* leftChild;
    TreeNode* rightChild;

    TreeNode(int value)
    {
        this->value=value;
        this->leftChild=NULL;
        this->rightChild=NULL;
    }
};

TreeNode* insertAtBinarySearchTree(TreeNode* root, int value)
{
    TreeNode* newNode = new TreeNode(value);
    if(root==NULL)
    {
        root=newNode;
        return root;
    }
    if(value<root->value)
    {
        root->leftChild=insertAtBinarySearchTree(root->leftChild, value);
    }
    else if(value>root->value)
    {
        root->rightChild=insertAtBinarySearchTree(root->rightChild, value);
    }
    return root;
}

void inOderTraversel(TreeNode* root, string &str)
{
    if(root==NULL) return;
    inOderTraversel(root->leftChild, str);
    str+=(to_string(root->value))+" ";
    inOderTraversel(root->rightChild, str);
}

TreeNode* searchBST(TreeNode* root, int value)
{
    if(root==NULL) return NULL;

    if(root->value == value)
    {
        cout<<root->value;
        return root;
    }
    else if(value<root->value)
    {
        cout<<root->leftChild->value<<"->";
        searchBST(root->leftChild, value);
    }
    else if(value>root->value)
    {
        cout<<root->rightChild->value<<"->";
        searchBST(root->rightChild, value);
    }
}

TreeNode* inOrderSuccessor(TreeNode* root)
{
    TreeNode* curr = root;
    while(curr->leftChild!=NULL)
    {
        curr=curr->leftChild;
    }
    return curr;
}

TreeNode* deleteBST(TreeNode* root, int value)
{
    if(value<root->value)
    {
        root->leftChild=deleteBST(root->leftChild, value);
    }
    else if(value>root->value)
    {
        root->rightChild=deleteBST(root->rightChild, value);
    }
    else
    {
        //case-1
        if(root->leftChild==NULL)
        {
            TreeNode* tmpNode= root->rightChild;
            free(root);
            return tmpNode;
        }
        //case-2
        else if(root->rightChild==NULL)
        {
            TreeNode* tmpNode= root->leftChild;
            free(root);
            return tmpNode;
        }
        //case-3
        else
        {
            TreeNode* temp=inOrderSuccessor(root->rightChild);
            root->value=temp->value;
            root->rightChild=deleteBST(root->rightChild, temp->value);
        }
        return root;
    }
}

int main()
{
    int n;
    cin>>n;

    TreeNode* root = NULL;
    int value;

    for(int i=0; i<n; i++)
    {
        cin>>value;
        root=insertAtBinarySearchTree(root, value);
    }
    string res="";
    inOderTraversel(root, res);
    cout<<res<<endl;



//    int searchVal=0;
//    cin>>searchVal;
//    searchBST(root, searchVal);

    int delVal=0;
    cin>>delVal;
    root=deleteBST(root, delVal);

    string afterDelRes="";
    inOderTraversel(root, afterDelRes);
    cout<<afterDelRes<<endl;

    return 0;
}
