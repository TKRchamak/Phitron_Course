#include<bits/stdc++.h>
using namespace std;

int binary_Search(int arr[], int n, int s_val)
{
    int lo = 0;
    int hi = n-1;
    int ans = -1;

    while(lo<=hi)
    {
        int mid_idx = (hi+lo)/2;
        int mid_val = arr[mid_idx];
        if(mid_val<s_val)
        {
            lo = mid_idx+1;
        }
        else if(mid_val>s_val)
        {
            hi = mid_idx-1;
        }
        else if(mid_val==s_val)
        {
            ans = mid_idx;
            break;
        }else
        {
            ans = -1;
        }
    }
    return ans;
}


int main()
{
    int N, Q, caseNo = 1;
    while(cin>>N>>Q)
    {
        if(N==0 && Q==0)
        {
            break;
        }
        else
        {
            int num_arr[N];
            for(int i=0;i<N;i++)
            {
                cin>>num_arr[i];
            }
            sort(num_arr, num_arr + N);

            cout<<"CASE# "<<caseNo<<":"<<endl;

            for(int i=0;i<Q;i++)
            {
                int ans=-1, s_num;
                cin>>s_num;
                ans = binary_Search(num_arr, N, s_num);
                if(ans == -1)
                {
                    cout<<s_num<<" not found"<<endl;
                }else
                {
                    cout<<s_num<<" found at "<<ans+1<<endl;
                }
            }
        }
        caseNo++;
    }
    return 0;
}
