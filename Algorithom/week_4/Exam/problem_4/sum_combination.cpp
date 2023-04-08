#include<bits/stdc++.h>
using namespace std;

int deduct(int num){
    if(num == 1) return 1;
    num = num-1;
    cout<<num<<" ";
    return deduct(num);
}

int main(){
    deduct(5);
    return 0;
}
