#include<bits/stdc++.h>
using namespace std;

int troizoidal_area(int fast_length, int secound_length, int height)
{
    int area = (fast_length + secound_length)*(height/2);
    return area;
}

int main()
{
    int a, b, h, res;
    cin>>a>>b>>h;
    res = troizoidal_area(a,b,h);
    cout<<res<<endl;

    return 0;
}
