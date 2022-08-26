#include<bits/stdc++.h>
using namespace std;

//template <created type> returnType (parameter)
template<typename T> T myMax(T a, T b)
{
    return (a>b)?a:b;
}

int main()
{
//    functionName <DataType> (parameter)
    cout<<myMax<int>(3,7)<<endl;
    cout<<myMax<float>(7.6,8.9)<<endl;
    cout<<myMax<char>('a','f')<<endl;
}
