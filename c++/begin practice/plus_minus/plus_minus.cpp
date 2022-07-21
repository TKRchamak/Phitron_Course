#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, res;
    char op;
    cin>>num1>>op>>num2;
    if(op=='-')
    {
        res = num1-num2;
    }
    if(op=='+')
    {
        res = num1+num2;
    }
    cout<<res;
    return 0;
}
