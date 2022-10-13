#include<bits/stdc++.h>
#include "DoubleyLinkListStack.h"
using namespace std;

int globalId = 100;

class Person{
    int id;
    string name;
    float salary;

public:
    Person()
    {
        this->id=-1;
        this->salary=-1;
        this->name="";
    }

    void setName(string name)
    {
        this->name=name;
    }

    void setSalary(float salary)
    {
        this->salary=salary;
    }

    Person(string name, float salary)
    {
        this->id=globalId;
        setName(name);
        setSalary(salary);
        globalId++;
    }

    string getName(void)
    {
        return this->name;
    }

    int getId(void)
    {
        return this->id;
    }

    float getSalaray(void)
    {
        return this->salary;
    }

    void print()
    {
        cout<<"ID : "<<this->getId()<<" | " << "Name : "<<this->getName()<<" | " << "Salary : "<<this->getSalaray()<<endl;
    }
};

int main()
{
//    Stack <int> st;

//    st.push(5);
//    st.push(4);
//    st.push(3);
//    st.push(2);
//    st.push(1);


//    string
//    Stack <pair<int,char>> st;

//    st.push("Tonmoy Kumar Roy");
//    st.push("Rafsan");
//    st.push("Khairul Islam");
//    st.push("Taki Kauser");
//    st.push("Mahfuz Alam");


//    pair
//    st.push(make_pair(5, 'e'));
//    st.push(make_pair(4, 'd'));
//    st.push(make_pair(3, 'c'));
//    st.push(make_pair(2, 'b'));
//    st.push(make_pair(1, 'a'));
//
//    while(!st.detectEmpty())
//    {
//        pair <int, char> par;
//        par=st.pop();
//        cout<<par.first<<endl;
//        cout<<par.second<<endl;
//    }



//    class
//    Stack <Person> st;
//
//    Person tonmoy("tonmoy", 2000);
//    Person b("kumar", 10000);
//    Person c("roy", 13000);
//
//    st.push(tonmoy);
//    st.push(b);
//    st.push(c);
//
//    while(!st.detectEmpty())
//    {
//        Person temp = st.pop();
//        temp.print();
//    }

}
