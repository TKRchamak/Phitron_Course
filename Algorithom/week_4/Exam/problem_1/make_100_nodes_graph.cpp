#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

vector<int>graph[N];

int main(){
    int range;
    cin>>range;

    for(int i=2; i<=range; i++){
        for(int j=i+1; j<=range; j++){
            if(j%i !=0) continue;
            else graph[i].push_back(j);
        }
    }

    for(int i=2; i<=range; i++){
        for(auto element: graph[i]){
            cout<<i<<" "<<element<<endl;
        }
        cout<<endl;
    }

    return 0;
}
