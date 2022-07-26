#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int arr_size;
    cout<<"Enter array size : ";
    cin>>arr_size;

    int int_array[arr_size];
    cout<<"Given integer Values : ";
    for(int i=0; i<arr_size; i++)
    {
        cin>>int_array[i];
    }
    cout<<endl;

    char are_you='Y';

    while(toupper(are_you)=='Y')
    {
        int searching_numbar, searching_flag=0;
        cout<<"Which number you want to search : ";
        cin>>searching_numbar;

        for(int i=0; i<arr_size; i++)
        {
            if(int_array[i]==searching_numbar)
            {
                searching_flag=1;
                cout<<"This number position : "<< i+1 <<endl;
            }
        }
        if(searching_flag==0)
        {
            cout<<"Not Found"<<endl;
        }

        cout<<"Are you want to search again (Y/N) : ";
        cin>>are_you;
        cout<<endl;

    }


    return 0;
}
