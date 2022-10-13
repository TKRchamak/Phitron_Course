#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row=0, col=0, maxNum=0;
    cin>>row>>col;

    int numArr[row][col]= {0};

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>numArr[i][j];
            if(maxNum<numArr[i][j])
            {
                maxNum=numArr[i][j];
            }
        }
    }
    cout<<endl;

    int frequencyArr[maxNum+1]= {0};

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(frequencyArr[numArr[i][j]] == 0)
            {
                frequencyArr[numArr[i][j]]++;
            }
            else
            {
                numArr[i][j]=-1;
            }
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<numArr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
