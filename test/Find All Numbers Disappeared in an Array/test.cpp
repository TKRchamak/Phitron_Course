#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums)
{
    int arr[nums.size()+1];
    for(int i=1; i<nums.size()+1; i++)
    {
        arr[i]=0;
    }


    for(int i=0; i<nums.size(); i++)
    {
        arr[nums[i]]++;
    }

    vector<int>ans(0);

    for(int i=1; i<nums.size()+1; i++)
    {
        if(arr[i]<1)
        {
            ans.push_back(i);
        }
    }

    return ans;
}

int main()
{
    int num;
    cin>>num;

    vector<int> nums(num,0);

    for(int i=0; i<num; i++)
    {
        int val;
        cin>>val;
        nums[i]=val;
    }

    vector<int> res = findDisappearedNumbers(nums);

    for(auto element: res)
    {
        cout<<element<<" ";
    }

    return 0;
}
