#include<bits/stdc++.h>
using namespace std;

int main()
{
    // RB || BR = P
    // RG || GR = Y
    // BG || GB = C
    int T;
    cin>>T;

    for(int i=0; i<T; i++)
    {
        int str_len =0;
        cin>>str_len;
        string str;
        cin>>str;
        str.resize(str_len);

        for(int i=0; i<str_len-1; i++)
        {
            cout<<str[i]<<endl;
            if(str[i]==str[i+1])
            {
                str.erase(str.begin()+(i+1));
                str.erase(str.begin()+i);
                i=0;
            }
            else if(str.substr(i,2) == "RB" || str.substr(i,2) == "BR")
            {
                str[i+1]='P';
                str.erase(str.begin()+i);
                i=0;
            }
            else if(str.substr(i,2) == "RG" || str.substr(i,2) == "GR")
            {
                str[i+1]='Y';
                str.erase(str.begin()+i);
                i=0;
            }
            else if(str.substr(i,2) == "BG" || str.substr(i,2) == "GB")
            {
                str[i+1]='C';
                str.erase(str.begin()+i);
                i=0;
            }
        }

        cout<<str<<endl;
    }
    return 0;
}
