#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int int_arr[T];
    for(int i=0; i<T; i++)
//    while(T--)
    {
        int N,K, counter=0;
        cin>>N>>K;
        int A[N];

        for(int j=0; j<N; j++)
        {
            cin>>A[j];
        }

        for(int j=0; j<N; j++)
        {
            if(j==0&& N>1)
            {
                int curr = A[j];
                for(int k=j+1; k<N; k++)
                {
                    curr=(curr|A[k]);
                }
                if(K<=curr)
                {
                    counter++;
                }
            }
            for(int k=(j+1); k<N; k++)
            {
                if(K<=(A[j]|A[k]))
                {
                    counter++;
                }
            }
        }
        int_arr[i]=counter;
    }

    for(int i=0; i<T; i++)
    {
        cout<<int_arr[i]<<endl;
    }


    return 0;
}
