#include<bits/stdc++.h>
using namespace std;

void print_statement(int n)
{
    static string res = "";
    static int point = 1;
    static string value = "";
    static int newPoint = 0;

    if(point>1)
    {
        if(point%2 == 0)
        {
            value.insert((value.length()-point+1), "-");
        }
        else
        {
            value.insert((value.length()-point+1), "+");
        }

        value.insert((value.length()-point+1), "sin(");
        value.insert((value.length()-point+1), to_string(point));
        value.insert((value.length()-point+1), ")");
    }else
    {
        value.insert(0, "sin(1)");
    }

//    cout<<(n-point)<<"--->"<<value<<endl;
    if(newPoint ==0)
    {
        res.append(value);
        res.append("+");
        res.append(to_string(n-newPoint));
    }
    else
    {
        res.insert(0, "(");
        res.append(")");
        res.append(value);
        res.append("+");
        res.append(to_string(n-newPoint));
    }



    if(point >= n)
    {
        cout<<res<<endl;
        return;
    }
    point +=1;
    newPoint +=1;
    print_statement(n);
}

int main()
{
    int n;
    cin>>n;
    print_statement(n);
    return 0;
}
