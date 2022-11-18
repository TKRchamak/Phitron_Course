#include<bits/stdc++.h>
using namespace std;

//void recursion(value)
//{
//    1. base case
//
//    2. process / checking
//
//    3. recursion function call
//}

void print_1_N(int start, int endNum)
{
    cout<<start<<endl;
    if(start == endNum) return;
    print_1_N(start+1, endNum);
    cout<<start<<endl;
}

int main()
{
    print_1_N(1, 5);
}


