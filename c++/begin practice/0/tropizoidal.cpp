#include<bits/stdc++.h>
using namespace std;

int troizoidal_area(int fast_length, int secound_length, int height)
{
    int area = ((fast_length + secound_length)*2)/height;
    return area;
}

int main()
{
    int a, b, h, res;
    cin>>a>>b>>h;
    if(a == b && b == h)
    {
        res = a*b;
    }else
    {
        res = troizoidal_area(a,b,h);
    }
    cout<<res<<endl;

    return 0;
}
