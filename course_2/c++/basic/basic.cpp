#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int a;
    double b;
    char ch = 'a';
    char ch_arr[100];
    cin>>a>>b>>ch;
    cin.getline(ch_arr, 100);


    cout<<"this is a integer "<<fixed<<setprecision(6)<<b<<"."<<endl<<" this is one handreade"<<endl;
    cout<<ch<<endl;
    cout<<ch_arr<<endl;
}
