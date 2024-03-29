#include<bits/stdc++.h>
using namespace std;

/*
    Iterators - begin(), end(), rbegin(), rend()
    Capacity - size(), max_size(), capacity(), empty(), [resize(), shrink_to_fit()]
    Element access - [], at(), front(), back()
    Modifiers - assign(), push_back(), pop_back(), insert(), erase(), clear(), swap(), remove()
    sort - sort(v.begin(), v.end())
    sort - sort(v.begin(), v.end(), greater<int>())
    reverse - sort(v.begin(), v.end())
*/




void print_vector(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

/*
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
*/

/*
    vector<int>:: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
*/


/*
//    auto register
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
*/


/*
    for(auto element: v)
    {
        cout<<element<<" ";
    }
    cout<<endl;
*/
}





int main()
{
//    vector<int> v;
    vector<int> v(3, 0); // 3--->how many element 0--->set all elements value 0

    /*
        vector<int>:: iterator it; // this is define process of iterator
        vector<int>:: reverse_iterator it2; // this is define process of reverse_iterator
        :: this scope
        iterator use to point a element
    */

    //-------------- // "rend" iterator point this position
    v.push_back(2);  // "begin" iterator point this position
    v.push_back(3);
    v.push_back(10);
    v.push_back(5);
    v.push_back(100);// "rbegin" iterator point this position
    //-------------- // "end" iterator point this position

    //iterator
    auto it=v.begin()+2;
    cout<<*it<<endl;


    // size() use to see the length, but capacity use to see use all memory size
    cout<<"size : "<<v.size()<<" | "<<"capacity : "<<v.capacity()<<endl;

    print_vector(v);

//    if you use the resize than you must to run the shirnk_to_fit func
//    s.resize(4);
//    v.shrink_to_fit();


//    empty() use to see the vector is empty or not and return true or false;

//    remove an element by value
    v[i].erase(remove(v.begin(), v.end(), 2), v.end());

    return 0;
}
