#include<bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    float total_tax;
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

class Selected_Items
{
public:
    int table_no;
    int numberOfOrder;
    int qunatity[12];
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int item_totalPrice[12];
    float total_tax;
    float total_price;

    Selected_Items(int tableNum, int numberOfOrder, int food_item_codes[], string food_item_names[], int food_item_prices[], int qunatity[])
    {
        float sum_of_total_producuct_price=0.00;
        this->table_no=tableNum;
        this->numberOfOrder=numberOfOrder;
        for(int i=0; i<numberOfOrder; i++)
        {
            this->food_item_codes[i]=food_item_codes[i];
            this->food_item_names[i]=food_item_names[i];
            this->food_item_prices[i]=food_item_prices[i];
            this->qunatity[i]=qunatity[i];
            this->item_totalPrice[i]=food_item_prices[i]*qunatity[i];
            sum_of_total_producuct_price += (food_item_prices[i]*1.00)*(qunatity[i]*1.00);
        }
        this->total_tax=(sum_of_total_producuct_price*5.00)/100.00;
        this->total_price = sum_of_total_producuct_price+total_tax;
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
    }
    else if(num<=99 && num>=10)
    {
        cout<<num;
        for(int j=0; j<(len-2); j++)
        {
            cout<<" ";
        }
    }
    else if(num<=999 && num>=100)
    {
        cout<<num;
        for(int j=0; j<(len-3); j++)
        {
            cout<<" ";
        }
    }
    else if(num<=9999 && num>=1000)
    {
        cout<<num;
        for(int j=0; j<(len-4); j++)
        {
            cout<<" ";
        }
    }
    else if(num<=99999 && num>=10000)
    {
        cout<<num;
        for(int j=0; j<(len-5); j++)
        {
            cout<<" ";
        }
    }
}

void print_column_with_float_number(float num)
{
    int len=30;
    if(num<=9 && num>=0)
    {
        cout<<num;
        for(int j=0; j<(len-1); j++)
        {
            cout<<" ";
        }
    }
    else if(num<=99 && num>=10)
    {
        cout<<num;
        for(int j=0; j<(len-2); j++)
        {
            cout<<" ";
        }
    }
    else if(num<=999 && num>=100)
    {
        cout<<num;
        for(int j=0; j<(len-3); j++)
        {
            cout<<" ";
        }
    }
    else if(num<=9999 && num>=1000)
    {
        cout<<num;
        for(int j=0; j<(len-4); j++)
        {
            cout<<" ";
        }
    }
    else if(num<=99999 && num>=10000)
    {
        cout<<num;
        for(int j=0; j<(len-5); j++)
        {
            cout<<" ";
        }
    }
}

Selected_Items* create_order(int tableNum, int numberOfOrder, Restaurant *resturent)
{
    int food_item_codes[numberOfOrder];
    string food_item_names[numberOfOrder];
    int food_item_prices[numberOfOrder];
    int qunatity[numberOfOrder];


    for(int i=0; i<numberOfOrder; i++)
    {
        int code, quantity, get=0;
flag:
        cout<<"Enter Item "<<(i+1)<<" Code : ";
        cin>>code;
        for(int j=0; j<12; j++)
        {
            if(resturent->food_item_codes[j]==code)
            {
                get=1;
                cout<<"Enter Item "<<(i+1)<<" Quantity : ";
                cin>>quantity;
                cout<<endl;
                qunatity[i]=quantity;
                food_item_codes[i]=resturent->food_item_codes[j];
                food_item_names[i].append(resturent->food_item_names[j]);
                food_item_prices[i]=resturent->food_item_prices[j];
                break;
            }
        }
        if(get==0)
        {
            cout<<"Sorry !! Wrong Code.... Please Try Again."<<endl;
            goto flag;
        }
    }

    Selected_Items *selected_items = new Selected_Items(tableNum, numberOfOrder, food_item_codes, food_item_names, food_item_prices, qunatity);
    return selected_items;
}

void print_unserline(int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"_";
    }
}

int main()
{
    int n, len=90;
    cin>>n;

    Restaurant *resturent = product_List(n);

    cout<<endl;
    string title = "MAKE BILL", underline="------------------";

    while(true)
    {
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

        Selected_Items *selected_items = create_order(tableNum, numberOfOrder, resturent);

        string title_summary = "MAKE SUMMARY";
        print_a_row_with_title_in_center(title_summary, len);
        print_a_row_with_title_in_center(underline, len);

        print_column_with_string("Item Code");
        print_column_with_string("Item Name");
        print_column_with_string("Item Price");
        print_column_with_string("Item Quantity");
        print_column_with_string("Total Price");
        cout<<endl;

        for(int i=0; i<numberOfOrder; i++)
        {
            print_column_with_number(selected_items->food_item_codes[i]);
            print_column_with_string(selected_items->food_item_names[i]);
            print_column_with_number(selected_items->food_item_prices[i]);
            print_column_with_number(selected_items->qunatity[i]);
            print_column_with_number(selected_items->item_totalPrice[i]);
            cout<<endl;
        }
        print_column_with_string("TAX");
        print_column_with_string(" ");
        print_column_with_string(" ");
        print_column_with_string(" ");
        print_column_with_float_number(selected_items->total_tax);
        cout<<endl;
        print_unserline(30);
        print_unserline(30);
        print_unserline(30);
        print_unserline(30);
        print_unserline(30);
        cout<<endl;
        print_column_with_string("NET TOTAL");
        print_column_with_string(" ");
        print_column_with_string(" ");
        print_column_with_string(" ");
        print_column_with_float_number(selected_items->total_price);
        cout<<endl;
        cout<<endl;

    }
    return 0;
}

