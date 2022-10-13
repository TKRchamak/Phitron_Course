#include<bits/stdc++.h>
using namespace std;

//-- polymorphism
//    --compile time
//        --function overloading
//        --operator overloading
//    --run time
//        --function overriding
//        --virtual function

class takenAndReturnData
{
private:
    int x, y, z, pass;
public:
    int add(int a, int b)
    {
        return a+b;
    }

    double add(double a, double b)
    {
        return a+b;
    }
};

int main()
{
    takenAndReturnData item;
    cout<<item.add(2.5,4.1)<<endl;
    return 0;
}
