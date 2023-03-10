#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    int data = 1600;
    float total_tax=(float(data)*5.0)/100.0;
    float total_price = float(data)+ float(total_tax)+0.50;

    cout << total_price<< " " << total_tax<< endl;

    return 0;
}
