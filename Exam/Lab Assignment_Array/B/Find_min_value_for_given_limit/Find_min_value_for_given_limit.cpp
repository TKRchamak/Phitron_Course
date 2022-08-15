#include<bits/stdc++.h>
using namespace std;

int main()
{
    int exequtionNum;
    cin>>exequtionNum;


    for(int i=0; i<exequtionNum; i++)
    {
        int arra_size, finding_exeqution_no;
        cin>>arra_size>>finding_exeqution_no;

        int int_arr[arra_size];
        for(int j=0; j<arra_size; j++)
        {
            cin>>int_arr[j];
        }

        int result_arr[finding_exeqution_no];

        for(int j=0; j<finding_exeqution_no; j++)
        {
            int lb, rb;
            cin>>lb>>rb;
            int min_value=int_arr[lb-1];
            for(int k=lb-1; k<=rb-1; k++)
            {
                if(int_arr[k]<min_value)
                {
                    min_value=int_arr[k];
                }
            }
            result_arr[j]=min_value;
        }
        cout<<"Case "<<i+1<<":"<<endl;
        for(int j=0; j<finding_exeqution_no; j++)
        {
            cout<<result_arr[j]<<endl;
        }
    }
    return 0;
}
