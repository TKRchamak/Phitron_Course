#include <iostream>
#include <cmath>
using namespace std;

long long convert(int);


int binaryToDecimal(long long n)
{
    int ans = 0, remainder, i = 0;
    while(n != 0)
    {
        remainder = n % 10;
        ans += remainder * pow(2, i);
        i++;
        n = n / 10;
    }
    return ans;
}

int decimalToBinary(int N)
{
    long long B_Number = 0;
    int cnt = 0;
    while (N != 0)
    {
        int rem = N % 2;
        long long c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }
    return B_Number;
}

int concatenatedBinary(int n)
{
    string str="";
    for(int i=1; i<=n; i++)
    {
        str+=to_string(decimalToBinary(i));
//        cout<<str<<" | "<<decimalToBinary(i)<<endl;
    }
    long long b_Number=0;
    cout<<b_Number<<endl;

    for ( int i = str.length() -1 ; i >= 0 ; i-- )
    {
        int power = str.length() - i -1;
        b_Number += (std::pow( 10.0,  power) * (str[i] - '0'));
    }
    return binaryToDecimal(b_Number);
}

int main()
{
    int n, bin;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout<<concatenatedBinary(n);
    return 0;
}
