#include <bits/stdc++.h>
using namespace std;

 bool is_palindrome(string str)
 {
     if (str == "" || str.size() == 1)
     {
         return true;
     }
     int n = str.size();
     string smallest_str = str.substr(1, n - 2);
     return is_palindrome(smallest_str) && str[0] == str.back();
 }

int main()
{
    string input_str = "";
    cin >> input_str;
    if(is_palindrome(input_str)){
        cout << "This is palindrome"<<endl;
    }else{
        cout << "This is not palindrome"<<endl;
    }
    return 0;
}
