#include<bits/stdc++.h>
using namespace std;

//template <typename tn> class treeNode
class treeNode
{
public:
    int value;
    treeNode * leftChild;
    treeNode * rightChild;

    treeNode(int value)
    {
        this->value = value;
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
    ans+=to_string (currRoot->value);
    inOrderTraversalFunc(currRoot->rightChild, ans);
}

void preOrderTraversalFunc(treeNode *currRoot, string &ans)
{
    if(currRoot==NULL)return;

    ans+=to_string (currRoot->value);
    preOrderTraversalFunc(currRoot->leftChild, ans);
    preOrderTraversalFunc(currRoot->rightChild, ans);
}

void postOrderTraversalFunc(treeNode *currRoot, string &ans)
{
    if(currRoot==NULL)return;

    postOrderTraversalFunc(currRoot->leftChild, ans);
    postOrderTraversalFunc(currRoot->rightChild, ans);
    ans+=to_string (currRoot->value);
}

void printTreeNodes(treeNode *currRoot, int level)
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

int levelOrderTraversel(treeNode *value, string &str, int Kth)
{
    if(value==NULL)
    {
        return -1;
    }
    int level=0, maxNum=-99999;
    queue<treeNode *> q; // create a queue for store level wise node's data .
    q.push(value);
    q.push(NULL);

    while(!q.empty())
    {
        treeNode* chekNode = q.front();
        q.pop();
        if(chekNode!=NULL)
        {
//            cout<<chekNode->value<<" ";
            str+=to_string(chekNode->value);
            if(level==Kth && chekNode->value>maxNum)
            {
                maxNum=chekNode->value;
            }

            if(chekNode->leftChild!=NULL)
            {
                q.push(chekNode->leftChild);
            }
            if(chekNode->rightChild!=NULL)
            {
                q.push(chekNode->rightChild);
            }
        }else
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

int searchInOrder(int inOrder[], int currentVal, int startPoint, int endPoint)
{
    for(int i=0;i<=endPoint;i++)
    {
        if(currentVal==inOrder[i])
        {
            return i;
        }
    }
    return -1;
}

treeNode* buildTreeFromPreOrderInOrder(int *preOrder, int *inOrder, int startPoint, int endPoint)
{
    static int id=0;
    int currentVal = preOrder[id];
    cout<<currentVal<<endl;
    id++;
    treeNode *newNode = new treeNode(currentVal);
    if(startPoint==endPoint)
    {
        return newNode;
    }
    int pos=searchInOrder(inOrder, currentVal, startPoint, endPoint);
    newNode->leftChild = buildTreeFromPreOrderInOrder(preOrder, inOrder, startPoint, pos-1);
    newNode->rightChild = buildTreeFromPreOrderInOrder(preOrder, inOrder, pos+1, endPoint);

    return newNode;
}

int main()
{
    int n;
    cin>>n;
    int preOrder[n], inOrder[n];
    for(int i=0;i<n;i++)
    {
        cin>>preOrder[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>inOrder[i];
    }

//    string preOrderTraverselStr;
    treeNode *root = buildTreeFromPreOrderInOrder(preOrder, inOrder, 0, n-1);
//    printTreeNodes(root, 0);

//    preOrderTraversalFunc(root, preOrderTraverselStr);
//    cout<<endl<<preOrderTraverselStr<<endl;

    return 0;
}

//9
//pre order - 013425786
//in  order - 314075826

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

