#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

struct ResArr
{
    int position[1000];
};

void printLinkList(Node *head)
{
    Node* n=head;
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->next!=NULL)cout<<"--";
        n=n->next;
    }
}

void insertValueAtTail(Node* &head, int value) // Node*---->pointer type.  &head----->address.
{
    Node* newNode = new Node(value); // create a node in the address of newNode & assign a value in the newNode er address er node a
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertValueAtHead(Node* &head, int value)
{
    Node* newNode = new Node(value);
    newNode->next=head;
    head=newNode;
}

void insertAtSpesificPoint(Node *&head, int possition, int value)
{
    int countNo=1;
    Node *temp = head;
    Node *newNode = new Node(value);
    while(countNo<possition-1)
    {
        if(temp==NULL)
        {
            cout<<"can not insert at this position";
            return;
        }
        countNo++;
        temp = temp->next;
    }
    if(temp==NULL)temp=newNode;
    else
    {
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

int sizeOfLinkList(Node* &head)
{
    int sum=0;
    Node *temp = head;
    while(temp!=NULL)
    {
        sum++;
        temp=temp->next;
    }
    return sum;
}

int findUniqueNumber(Node *&head, int num)
{
    Node *temp = head;
    int position = 1;
    if(temp==NULL) return -1;

    while(temp->value!=num)
    {
        if(temp->next==NULL)
        {
//            cout<<"this values position is : "<<position<<endl;
            return -1;
        }
        position++;
        temp = temp->next;
    }
    return position;
}

void findSameNumberMultiplePossition(Node *&head, int num)
{
    Node *temp = head;
    int position = 1, flag=-1;
    int len = sizeOfLinkList(head);
    int positionArr[len+1], k=1;
    while(temp!=NULL)
    {
        if(temp->value==num)
        {
//            cout<<"this values position is : "<<position<<endl;
            positionArr[k]=position;
            k++;
            flag=1;
        }
        position++;
        temp = temp->next;
    }
    if(flag==-1)
    {
        cout<<"Number Not Found"<<endl;
    }
    else
    {
        positionArr[0]=k;
        for(int i=1; i<positionArr[0]; i++)
        {
            cout<<positionArr[i]<<",";
        }
    }
}

ResArr findValueMultiplePossitionWithReturn(Node *&head, int num)
{
    Node *temp = head;
    ResArr res;
    int position = 1, k=1;
    while(temp!=NULL)
    {
        if(temp->value==num)
        {
            res.position[k]=position;
            k++;
        }
        position++;
        temp = temp->next;
    }
    res.position[0]=k;

    return res;
}

void InsertValueAfterUniqueValue(Node *&head, int searchValue, int value)
{
    int position;
    position = findUniqueNumber(head, searchValue);
    insertAtSpesificPoint(head, position+1, value);
}

void deleteAtHead(Node *&head)
{
    if(head == NULL)
    {
        cout<<"This List have nothing";
    }
    else{
        Node *temp=head;
        head = head->next;
        delete temp;
    }
}

void deleteAtTail(Node *&head)
{
    Node *temp=head;
    if(temp != NULL && temp->next!=NULL)
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        Node *delNode = temp->next;
        temp->next=NULL;
        delete delNode;
    }
    else{
        if(temp==NULL) cout<<"This List have nothing";
        else deleteAtHead(head);
    }
}

void deleteAtSpecificPosition(Node *&head, int pos)
{
    Node *temp =head;
    int i=1;
    while(i<pos-1)
    {
        if(temp!=NULL)
        {
            temp=temp->next;
            i++;
        }
        else{
            cout<<"There are nothing"<<endl;;
            return;
        }
    }
    Node *deleteNode = temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}

void deleteByValueUnique(Node *&head, int value)
{
    int pos;
    pos=findUniqueNumber(head, value);
    if(pos == -1)
    {
        cout<<"Value Not found in the list"<<endl;
    }else
    {
        deleteAtSpecificPosition(head, pos+1);
    }
}

Node* reverseNonRecursive(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    if(head==NULL){
        cout<<"The LinkList is empty"<<endl;
        return head;
    }
    Node *post = head->next;

    while(true)
    {
        curr->next=prev;
        prev=curr;
        curr=post;
        if(curr==NULL)break;
        post=post->next;
    }
    return prev;
}

Node* reverseRecursive(Node *&head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* newHead = reverseRecursive(head->next); //b->next=null
    head->next->next=head; //b->next=a
    head->next=NULL; //a->next=null

    return newHead;
}

int findMidBySlowFastMathode(Node* &head)
{
    Node* fast = head;
    Node* slow = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow= slow->next;
        fast=fast->next->next;
    }
    return slow->value;
}

void makeACycleInKthPosition(Node* &head, int pos)
{
    Node* temp = head;
    int countNo = 1;
    Node* cycleStartNode;

    while(temp->next !=NULL)
    {
        if(countNo==pos)cycleStartNode=temp;
        temp= temp->next;
        countNo++;
    }
    temp->next=cycleStartNode;
}

bool detectionCycle(Node* &head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast->next !=NULL && fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(Node *&head)
{
    Node* slow = head;
    Node* fast = head;

    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow!=fast);
    fast = head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

int main()
{
//    Node* head = new Node();  // create a node without constrator
//    Node* second = new Node();
//    Node* third = new Node();
//    Node* forth = new Node();
//
//    head->value = 4;3
//    second->value = 8;
//    third->value = 11;
//    forth->value = 22;
//
//    head->next = second;
//    second->next = third;
//    third->next = forth;
//    forth->next = NULL;




//    Node *head=NULL; // Node----->create a node & *head--->create a address for a node;
//    insertValue(head, 5);
//    insertValue(head, 8);
//    insertValue(head, 9);
//    insertValue(head, 60);


    Node *head=NULL; // Node----->create a node & *head--->create a address for a node;
    int num, posi;
    bool haveCycle;
    while(true)
    {

        cout<<"For EXIT press 0 : "<<endl;
        cout<<"Are you want to Print List press 1 : "<<endl;
        cout<<"Are you want to insert value at head press 2 : "<<endl;
        cout<<"Are you want to insert value at tail press 3 : "<<endl;
        cout<<"Are you want to insert value at specific position press 4 : "<<endl;
        cout<<"Are you want to see list size, press 5 : "<<endl;
        cout<<"Are you want to find any unique number, press 6 : "<<endl;
        cout<<"Are you want to find any number in multiple place, press 7 : "<<endl;
        cout<<"Are you want to find any number in multiple place(return), press 8 : "<<endl;
        cout<<"Are you want to insert number after a specific number, press 9 : "<<endl;
        cout<<"Are you want to delete head, press 10 : "<<endl;
        cout<<"Are you want to delete at tail, press 11 : "<<endl;
        cout<<"Are you want to delete at specific position, press 12 : "<<endl;
        cout<<"Are you want to delete a value after a specific value, press 13 : "<<endl;
        cout<<"Are you want to reverse the List, press 14 : "<<endl;
        cout<<"Are you want to reverse the List by recursive, press 15 : "<<endl;
        cout<<"Are you want to find mid, press 16 : "<<endl;
        cout<<"Are you want to make a cycle, press 17 : "<<endl;
        cout<<"Are you want to detect cycle in list, press 18 : "<<endl;
        cout<<"Are you want to Remove cycle in list, press 19 : "<<endl;
        cout<<endl;

        int choosenNum;
        cout<<"Select a Option : ";
        cin>>choosenNum;
        switch(choosenNum)
        {
        case 0:
            return 0;
            break;
        case 1:
            printLinkList(head);
            break;
        case 2:
            cout<<"Input value : ";
            cin>>num;
            insertValueAtHead(head, num);
            break;
        case 3:
            cout<<"Input value : ";
            cin>>num;
            insertValueAtTail(head, num);
            break;
        case 4:
            cout<<"Input position : ";
            cin>>posi;
            cout<<"Input value : ";
            cin>>num;
            insertAtSpesificPoint(head, posi, num);
            break;
        case 5:
            cout<<"The list size is : "<<sizeOfLinkList(head)<<endl;
            break;
        case 6:
            cout<<"Input number for Search : ";
            cin>>num;
            cout<<"this values position is : "<<findUniqueNumber(head, num)<<endl;
            break;
        case 7:
            cout<<"Input number for Search: ";
            cin>>num;
            findSameNumberMultiplePossition(head, num);
            break;
        case 8:
            cout<<"Input number for Search: ";
            cin>>num;
            ResArr result;
            result=findValueMultiplePossitionWithReturn(head, num);
            for(int i=1; i<result.position[0]; i++)
            {
                cout<<result.position[i]<<" ";
            }
            cout<<endl;
            break;
        case 9:
            cout<<"Input number for Search: ";
            int serachValue, value;
            cin>>serachValue>>value;
            InsertValueAfterUniqueValue(head, serachValue, value);
            break;
        case 10:
            deleteAtHead(head);
            break;
        case 11:
            deleteAtTail(head);
            break;
        case 12:
            int pos;
            cout<<"Select Position : ";
            cin>>pos;
            deleteAtSpecificPosition(head, pos);
            break;
        case 13:
            int val;
            cout<<"Select Value : ";
            cin>>val;
            deleteByValueUnique(head, val);
            break;
        case 14:
            head=reverseNonRecursive(head);
            break;
        case 15:
            head=reverseRecursive(head);
            break;
        case 16:
            int midValue;
            midValue=findMidBySlowFastMathode(head);
            cout<<"Mid value is : "<< midValue<<endl;
            break;
        case 17:
            cout<<"Input position : ";
            cin>>posi;
            makeACycleInKthPosition(head, posi);
            break;
        case 18:
            haveCycle=detectionCycle(head);
            if(haveCycle==true)
            {
                cout<<"This list have loop or cycle"<<endl;
            }
            else
            {
                cout<<"This list have no loop or cycle"<<endl;
            }
            break;

        case 19:
            haveCycle=detectionCycle(head);
            if(haveCycle==true)
            {
                removeCycle(head);
            }
            else
            {
                cout<<"This list have no loop or cycle"<<endl;
            }
            break;
        default :
            break;
        }
        cout<<endl;
    }
    return 0;
}
