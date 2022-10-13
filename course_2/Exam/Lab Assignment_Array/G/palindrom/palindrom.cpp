#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int fast_num=num/100;
    int last_num=num%10;

    if(fast_num==last_num)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
