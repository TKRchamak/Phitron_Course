#include<bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
    Restaurant(int food_item_codes[], string food_item_names[], int food_item_prices[], int n)
    {
        this->total_tax=0;
        for(int i=0; i<n; i++)
        {
            this->food_item_codes[i]=food_item_codes[i];
            this->food_item_names[i]=food_item_names[i];
            this->food_item_prices[i]=food_item_prices[i];
        }
    }
};

Restaurant* product_List(int n)
{
    int food_item_codes[n];
    string food_item_names[n];
    int food_item_prices[n];

    for(int i=0; i<n; i++)
    {
        cin>>food_item_codes[i];
        cin.ignore();
        getline(cin, food_item_names[i]);
        cin>>food_item_prices[i];
    }

    Restaurant *resturent = new Restaurant(food_item_codes, food_item_names, food_item_prices, n);
    return resturent;
}

void print_a_row_with_title_in_center(string title, int len)
{
    for(int j=0; j<int((len/2)-int(title.length()/2)); j++)
    {
        cout<<" ";
    }
    cout<<title;
    for(int j=0; j<int((len/2)-int(title.length()/2)); j++)
    {
        cout<<" ";
    }
    cout<<endl;
}

void print_column_with_string(string title)
{
    int len=30;
    cout<<title;
    for(int j=0; j<(len-title.length()); j++)
    {
        cout<<" ";
    }
}

void print_column_with_number(int num)
{
    int len=30;
    if(num<=9 && num>=0)
    {
        cout<<num;
        for(int j=0; j<(len-1); j++)
        {
            cout<<" ";
        }
    }else if(num<=99 && num>=10)
    {
        cout<<num;
        for(int j=0; j<(len-2); j++)
        {
            cout<<" ";
        }
    }else if(num<=999 && num>=100)
    {
        cout<<num;
        for(int j=0; j<(len-3); j++)
        {
            cout<<" ";
        }
    }else if(num<=9999 && num>=1000)
    {
        cout<<num;
        for(int j=0; j<(len-4); j++)
        {
            cout<<" ";
        }
    }else if(num<=99999 && num>=10000)
    {
        cout<<num;
        for(int j=0; j<(len-5); j++)
        {
            cout<<" ";
        }
    }
}

int main()
{
    int n, len=90;
    cin>>n;
    string title = "MAKE BILL", underline="------------------";

    Restaurant *resturent = product_List(n);

    cout<<endl;

    print_a_row_with_title_in_center(title, len);
    print_a_row_with_title_in_center(underline, len);

    print_column_with_string("Item Code");
    print_column_with_string("Item Name");
    print_column_with_string("Item Price");
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        print_column_with_number(resturent->food_item_codes[i]);
        print_column_with_string(resturent->food_item_names[i]);
        print_column_with_number(resturent->food_item_prices[i]);
        cout<<endl;
    }

    int tableNum, numberOfOrder;
    cout<<"Enter Table No : ";
    cin>>tableNum;
    cout<<endl;
    cout<<"Enter Number of Items : ";
    cin>>numberOfOrder;
    cout<<endl;

    for(int i=0; i<n; i++)
    {

    }

    return 0;
}

