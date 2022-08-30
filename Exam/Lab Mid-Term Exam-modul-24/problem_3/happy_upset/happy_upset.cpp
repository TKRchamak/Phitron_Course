#include<bits/stdc++.h>
using namespace std;

struct dayDetail
{
    int earn;
    int spend;
};

int checkHappyOrUpset(struct dayDetail *arr, int day)
{
    int totalEarn=0, totalSpend=0;
    for(int i=0; i<=day; i++)
    {
        totalEarn+=arr[i].earn;
        totalSpend+=arr[i].spend;
    }
    if(totalEarn>=totalSpend)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numberOfTestCase=0, numberOfDay=0, noOfQueries=0;
    cin>>numberOfTestCase;

    for(int j=0; j<numberOfTestCase; j++)
    {
        cin>>numberOfDay;
        struct dayDetail day[numberOfDay];

        for(int i=0; i<numberOfDay; i++)
        {
            cin>>day[i].earn;
        }

        for(int i=0; i<numberOfDay; i++)
        {
            cin>>day[i].spend;
        }

        cin>>noOfQueries;
        for(int i=0; i<noOfQueries; i++)
        {
            int selectDay=0;
            cin>>selectDay;
            cout<<checkHappyOrUpset(day, selectDay)<<endl;
        }
        cout<<endl;
    }

    return 0;
}
