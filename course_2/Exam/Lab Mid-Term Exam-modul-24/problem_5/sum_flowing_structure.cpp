#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, row=0, col=0, sum=0;
    cin>>n;
    row=col=n;

    int numArr[row][col]= {0};

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>numArr[i][j];
        }
    }

    int mid= n/2;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            numArr[i][j];
            if(i<mid)
            {
                if(i==0 && j<=mid)
                {
                    sum+=numArr[i][j];
                }
                else if(j==col-1 || j==mid)
                {
                    sum+=numArr[i][j];
                }
            }
            else if(i==mid)
            {
                sum+=numArr[i][j];
            }
            else if(i>mid)
            {
                if(i==row-1 && j>=mid)
                {
                    sum+=numArr[i][j];
                }
                else if(j==0 || j==mid)
                {
                    sum+=numArr[i][j];
                }
            }
        }
    }
    cout<<"this is the sum : "<< sum;
    return 0;
}



//    for(int i=0; i<row; i++)
//    {
//        for(int j=0; j<col; j++)
//        {
//            numArr[i][j];
//            if(i<mid)
//            {
//                if(i==0 && j<=mid)
//                {
//                    cout<<numArr[i][j]<< " ";
//                }
//                else if(j==col-1 || j==mid)
//                {
//                    cout<<numArr[i][j]<< " ";
//                }
//                else
//                {
//                    cout<<'0'<< " ";
//                }
//            }
//            else if(i==mid)
//            {
//                cout<<numArr[i][j]<< " ";
//            }
//            else if(i>mid)
//            {
//                if(i==row-1 && j>=mid)
//                {
//                    cout<<numArr[i][j]<< " ";
//                }
//                else if(j==0 || j==mid)
//                {
//                    cout<<numArr[i][j]<< " ";
//                }
//                else
//                {
//                    cout<<'0'<< " ";
//                }
//            }
//        }
//        cout<<endl;
//    }
