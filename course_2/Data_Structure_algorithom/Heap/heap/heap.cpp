#include<bits/stdc++.h>
using namespace std;

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
        int smallest = start;
        if(left_index<v.size() && v[left_index]<v[smallest])
        {
            smallest = left_index;
        }

        if(right_index<v.size() && v[right_index]<v[smallest])
        {
            smallest = right_index;
        }

        swap(v[start], v[smallest]);
        if(smallest!=start)
        {
            heapify(smallest);
        }
    }

public:
     void push(int val)
     {
         v.push_back(val);
         int curr_last_inx = v.size()-1;
         while(v[curr_last_inx] < v[parent(curr_last_inx)])
         {
             swap(v[curr_last_inx], v[parent(curr_last_inx)]);
             curr_last_inx=parent(curr_last_inx);
         }
     }

     int top()
     {
         return v[0];
     }

     int pop()
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
    Priority_Queue pq;
    pq.push(20);
    pq.push(18);
    pq.push(2);
    pq.push(40);
    pq.push(5);

    while(!pq.Empty())
    {
        cout<<pq.top()<< " ";
        pq.pop();
    }


    //  1. set in array
    //  2. set elements are in level order
    //  3. if parent = p, than the child = 1st child = 2p+1 and thd the 2nd child is = 2p+2
    //  4. if child = c; than the parent is  = (c-1)/2

    return 0;
}
