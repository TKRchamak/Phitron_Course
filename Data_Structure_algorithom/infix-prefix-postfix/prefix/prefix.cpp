#include<bits/stdc++.h>
#include"DoubleyLinkListStack.h"
using namespace std;

int precisionCal(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if( c=='/' || c=='*')
    {
        return 2;
    }
    else if( c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixToPostfix(string str)
{
    string result;
    Stack<char> st;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            result+=str[i];
        }
        else if(str[i]=='(')
        {
            st.push(str[i]);
        }
        else if(str[i]==')')
        {
            while(!st.detectEmpty() && st.topElement()!='(')
            {
                result+=st.pop();
            }
            if(!st.detectEmpty())st.pop();
        }
        else
        {
            while(!st.detectEmpty() && precisionCal(st.topElement())>=precisionCal(str[i]))
            {
                result+=st.pop();
            }
            st.push(str[i]);
        }
    }

    while(!st.detectEmpty())
    {
        result+=st.pop();
    }
    return result;
}

string infixToPrefix(string str)
{
    reverse(str.begin(),str.end());
    string result;
    Stack<char> st;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            result+=str[i];
        }
        else if(str[i]==')')
        {
            st.push(str[i]);
        }
        else if(str[i]=='(')
        {
            while(!st.detectEmpty() && st.topElement()!=')')
            {
                result+=st.pop();
            }
            if(!st.detectEmpty())st.pop();
        }
        else
        {
            while(!st.detectEmpty() && precisionCal(st.topElement())>=precisionCal(str[i]))
            {
                result+=st.pop();
            }
            st.push(str[i]);
        }
    }

    while(!st.detectEmpty())
    {
        result+=st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}

int prefixEvaluation(string str)
{
    Stack <int> st;
    for(int i=str.length() -1; i>=0; i--)
    {
//        cout<<st.topElement()<<" ";
        if(str[i]>='0' && str[i]<='9')
        {
            st.push(str[i]-'0');
        }
        else
        {
            int a=st.pop();
            int b=st.pop();

            switch(str[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '^':
                st.push(pow(a,b));
                break;
            default:
                break;
            }
        }
    }
    return st.topElement();
}

int postfixEvaluation(string str)
{
    Stack <int> st;
    for(int i=0; i<str.length(); i++)
    {
//        cout<<st.topElement()<<" ";
        if(str[i]>='0' && str[i]<='9')
        {
            st.push(str[i]-'0');
        }
        else
        {
            int a=st.pop();
            int b=st.pop();

            switch(str[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '^':
                st.push(pow(a,b));
                break;
            default:
                break;
            }
        }
    }
    return st.topElement();
}

int main()
{
//    cout<<prefixEvaluation("+*423")<<endl;
//    cout<<prefixEvaluation("-+7*45+20")<<endl;

    string infix = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
    string prefix, postfix;
    prefix=infixToPrefix(infix);
    postfix=infixToPostfix(infix);

    cout<<prefix<<endl;
    cout<<postfix<<endl;
    cout<<prefixEvaluation(prefix)<<endl;
    cout<<postfixEvaluation(postfix)<<endl;


    return 0;
}

