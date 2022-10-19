#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        int num=0;
        cin>>num;
        if(i==0)
        {
            arr[i]=num;
        }else
        {
            arr[i]=arr[i-1]+num;
        }
    }

    int test_case=0;
    cin>>test_case;
    for(int i=0;i<test_case;i++)
    {
        int a;
        int b;
        cin>>a>>b;
        int ans=0;
        if(a!=0)
        {
            ans=arr[b]-arr[a-1];
        }else
        {
            ans=arr[b];
        }
        cout<<ans<<endl;
    }
    return 0;
}
