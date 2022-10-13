#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    int mid = N/2;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            if(j>=N-(i+i-1-1) && j<i+i-1)
            {
                cout<<mid;
            }else{
                cout<<' ';
            }

        }
        cout<<endl;
    }
    return 0;
}
