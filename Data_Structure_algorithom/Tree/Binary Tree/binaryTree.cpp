#include<bits/stdc++.h>
using namespace std;

//template <typename tn> class treeNode
class treeNode
{
public:
    int root;
    treeNode * leftChild;
    treeNode * rightChild;

    treeNode(int root)
    {
        this->root = root;
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

void inOrderTraversalFunc(treeNode *currRoot, string &ans)
{
    if(currRoot==NULL)return;

    inOrderTraversalFunc(currRoot->leftChild, ans);
    ans+=to_string (currRoot->root);
    inOrderTraversalFunc(currRoot->rightChild, ans);
}

void preOrderTraversalFunc(treeNode *currRoot, string &ans)
{
    if(currRoot==NULL)return;

    ans+=to_string (currRoot->root);
    preOrderTraversalFunc(currRoot->leftChild, ans);
    preOrderTraversalFunc(currRoot->rightChild, ans);
}

void postOrderTraversalFunc(treeNode *currRoot, string &ans)
{
    if(currRoot==NULL)return;

    postOrderTraversalFunc(currRoot->leftChild, ans);
    postOrderTraversalFunc(currRoot->rightChild, ans);
    ans+=to_string (currRoot->root);
}

void printTreeNodes(treeNode *currRoot, int level)
{
    if(currRoot==NULL) return; //when the tree is empty

    if(currRoot->leftChild==NULL && currRoot->rightChild==NULL) //case 1
    {
        cout<<currRoot->root<<endl;
        return;
    }
    else //case 1
    {
        cout<<endl;
        printSpace(level);
        cout<<"Root: "<<currRoot->root<<endl;
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


int levelOrderTraversel(treeNode *root, string &str, int Kth)
{
    if(root==NULL)
    {
        return -1;
    }
    int level=0, maxNum=-99999;
    queue<treeNode *> q; // create a queue for store level wise node's data .
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        treeNode* chekNode = q.front();
        q.pop();
        if(chekNode!=NULL)
        {
//            cout<<chekNode->root<<" ";
            str+=to_string(chekNode->root);
            if(level==Kth && chekNode->root>maxNum)
            {
                maxNum=chekNode->root;
            }

            if(chekNode->leftChild!=NULL)
            {
                q.push(chekNode->leftChild);
            }
            if(chekNode->rightChild!=NULL)
            {
                q.push(chekNode->rightChild);
            }
        }
        else
        {
            if(!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
    }

    return maxNum;
}


int main()
{
    int n;
    cin>>n;
    treeNode *allnodes[n];

    for(int i=0; i<n; i++)
    {
        allnodes[i]=new treeNode(-1);
    }

    for(int i=0; i<n; i++)
    {
        int root, left, right;
        cin>>root>>left>>right;

        allnodes[i]->root=root;

        if(left>n-1 || right>n-1)
        {
            cout<<"Invalid index"<<endl;
            break;
        }

        if(left != -1)
        {
            allnodes[i]->leftChild = allnodes[left];
        }

        if(right != -1)
        {
            allnodes[i]->rightChild = allnodes[right];
        }

    }

//    printTreeNodes(allnodes[0], 0);

    string inOrderTraversalStr, preOrderTraversalStr, postOrderTraversalStr, levelOrderTraverselStr;
//    inOrderTraversalFunc(allnodes[0],inOrderTraversalStr);
//    preOrderTraversalFunc(allnodes[0],preOrderTraversalStr);
//    postOrderTraversalFunc(allnodes[0],postOrderTraversalStr);

//    levelOrderTraversel(allnodes[0], levelOrderTraverselStr);

    int findMaxAtKthLevel = levelOrderTraversel(allnodes[0], levelOrderTraverselStr, 3);
    cout<<"Level Order Number : "<<levelOrderTraverselStr<<". Max Number At 2nd level : "<<findMaxAtKthLevel<<endl;

//    cout<<"Inner Traversal: "<<inOrderTraversalStr<<endl;
//    cout<<"Inner Traversal: "<<preOrderTraversalStr<<endl;
//    cout<<"Inner Traversal: "<<postOrderTraversalStr<<endl;

    return 0;
}



//9
//0 1 2
//1 3 4
//2 5 6
//3 -1 -1
//4 -1 -1
//5 7 8
//6 -1 -1
//7 -1 -1
//8 -1 -1


//root: 1
//    left:
//        root:2
//        left:
//            root:4
//            left:8
//            right:9
//        right:
//            root:5
//            left:10
//            right:11
//    right:
//        root:3
//        left:
//            root:6
//            left:12
//            right:13
//        right:
//            root:7
//            left:14
//            right:15

