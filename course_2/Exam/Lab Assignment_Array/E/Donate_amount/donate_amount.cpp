#include<bits/stdc++.h>
using namespace std;

int main()
{
    int exequtionNum;
    cin>>exequtionNum;

    for(int i=0; i<exequtionNum; i++)
    {
        int size_of_arr, number_of_people;
        cin>>size_of_arr>>number_of_people;

        int num_arr[size_of_arr];
        int prifix_arr[size_of_arr];

        for(int j=0; j<size_of_arr; j++)
        {
            cin>>num_arr[j];
            if(j==0)
            {
                prifix_arr[0]=num_arr[0];
            }
            else
            {
                prifix_arr[j]=num_arr[j]+prifix_arr[j-1];
            }
        }


        int result_arr[number_of_people];
        for(int j=0; j<number_of_people; j++)
        {
            int conditionNo, point, left_point=0, right_point=0, extend_amount=0;
            cin>>conditionNo;
            if(conditionNo==1)
            {
                cin>>point;
//                cout<<num_arr[point]<<endl;
                result_arr[j]=num_arr[point];

                num_arr[point]=0;
                for(int q=0; q<size_of_arr; q++)
                {
                    if(q==0)
                    {
                        prifix_arr[0]=num_arr[0];
                    }
                    else
                    {
                        prifix_arr[q]=num_arr[q]+prifix_arr[q-1];
                    }
                }
            }
            else if(conditionNo==2)
            {
                cin>>point>>extend_amount;
                result_arr[j]=prifix_arr[point]+extend_amount;
                num_arr[point]+=extend_amount;

                for(int q=0; q<size_of_arr; q++)
                {
                    if(q==0)
                    {
                        prifix_arr[0]=num_arr[0];
                    }
                    else
                    {
                        prifix_arr[q]=num_arr[q]+prifix_arr[q-1];
                    }
                }
            }
            else if(conditionNo==3)
            {
                cin>>left_point>>right_point;
                if(left_point==0)
                {
                    result_arr[j]=prifix_arr[right_point];
                }
                else
                {
                    result_arr[j]=prifix_arr[right_point]-prifix_arr[left_point-1];
                }
            }
        }

        cout<<"Case "<<i+1<<":"<<endl;
        for(int j=0; j<number_of_people; j++)
        {
            if(j==0)
            {
                cout<<result_arr[j]<<endl;
            }
            else if(result_arr[j]==result_arr[j-1])
            {
                continue;
            }
            else
            {
                cout<<result_arr[j]<<endl;
            }
        }
    }
    return 0;
}
