#include<bits/stdc++.h>

using namespace std;

class takenAndReturnData
{
private:
    int a, b, c, pass;
public:
    takenAndReturnData(int p)
    {
        pass=p;
    }

    void setter(int takenData)
    {
        a=takenData;
    }

    int getter()
    {
        return a;
    }
};

int main()
{
    takenAndReturnData item(1234);
    item.setter(11);
    int res=item.getter();
    cout<<res<<endl;
    return 0;
}
