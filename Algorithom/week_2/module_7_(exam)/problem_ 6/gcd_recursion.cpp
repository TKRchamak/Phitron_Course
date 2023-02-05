#include<bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2) // with recursion
{
    if(num2>0)
    {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
        return gcd(num1, num2);
    }
    return num1;
}

//int gcd(int a, int b) {
//  while (b != 0) {
//    int remainder = a % b;
//    a = b;
//    b = remainder;
//  }
//  return a;
//}

int main()
{
    int num1, num2;
    cin>>num1>>num2;
    cout<<gcd(num1, num2);
    return 0;
}
