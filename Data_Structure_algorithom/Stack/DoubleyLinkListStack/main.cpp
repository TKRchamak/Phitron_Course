#include<bits/stdc++.h>
#include "DoubleyLinkListStack.h"
using namespace std;

void insertAtBottom(Stack &chk, int chkElement)
{
    if(chk.detectEmpty())
    {
        chk.push(chkElement);
        return;
    }
    int topElement = chk.topElement();
    chk.pop();
    insertAtBottom(chk, chkElement);
    chk.push(topElement);
}

void reverseStack(Stack &chk)
{
    if(chk.detectEmpty())
    {
        return;
    }
    int topElement = chk.topElement();
    chk.pop();
    reverseStack(chk);
    insertAtBottom(chk, topElement);
}

int main()
{
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);

    while(!st.detectEmpty())
    {
        cout<<st.pop()<<" ";
    }
}
