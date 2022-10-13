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

class Priority_Queue
{
private:
    vector<int> v;
    int left_child(int i)
    {
        return (2*i)+1;
    }
    int right_child(int i)
    {
        return (2*i)+2;
    }

    int parent(int i)
    {
        return (i-1)/2;
    }

    void heapify(int start)
    {
        int left_index = left_child(start);
        int right_index = right_child(start);
        int biggest = start;
        if(left_index<v.size() && v[left_index]>v[biggest])
        {
            biggest = left_index;
        }

        if(right_index<v.size() && v[right_index]>v[biggest])
        {
            biggest = right_index;
        }

        swap(v[start], v[biggest]);
        if(biggest!=start)
        {
            heapify(biggest);
        }
    }

public:
    void push(int val)
    {
        v.push_back(val);
        int curr_last_inx = v.size()-1;
        while(v[curr_last_inx] > v[parent(curr_last_inx)])
        {
            swap(v[curr_last_inx], v[parent(curr_last_inx)]);
            curr_last_inx=parent(curr_last_inx);
        }
    }

    int top()
    {
        return v[0];
    }

    void pop()
    {
        v[0]=v[v.size()-1];
        v.pop_back();
        heapify(0);
    }

    bool Empty()
    {
        return v.size()==0;
    }
};

int main()
{
    //  1. set in array
    //  2. set elements are in level order
    //  3. if parent = p, than the child = 1st child = 2p+1 and thd the 2nd child is = 2p+2
    //  4. if child = c; than the parent is  = (c-1)/2

    int a;
    cin>>a;

    Priority_Queue pq;

    vector<int> v;
    v.push_back(a);

    while(!v.empty())
    {
        v.erase(v.begin());

        int left, right;
        cin>>left>>right;

        if(left!=-1)
        {
            pq.push(left);
            v.push_back(left);
        }
        if(right!=-1)
        {
            pq.push(right);
            v.push_back(right);
        }
    }

    int testCase;
    cin>>testCase;
    for(int i=0; i<testCase; i++)
    {
        int cNo;
        cin>>cNo;
        if(cNo==1)
        {
            int insertAbleNo;
            cin>>insertAbleNo;
            pq.push(insertAbleNo);
        }
        else if(cNo==2)
        {
            cout<<pq.top()<<endl;
            pq.pop();
        }
    }


//    while(!pq.Empty())
//    {
//        cout<<pq.top()<< " ";
//        pq.pop();
//    }

    return 0;
}
