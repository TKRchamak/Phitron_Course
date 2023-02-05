#include<bits/stdc++.h>
using namespace std;

string int_to_binary(int num, string binary="")
{
    if(num>0)
    {
        if (num % 2 == 0) {
            binary = '0' + binary;
        }
        else {
            binary = '1' + binary;
        }
        num /= 2;
        return int_to_binary(num, binary);
    }
    return binary;
}

int main()
{
    int num;
    cin>>num;
    cout<<int_to_binary(num);
    return 0;
}
