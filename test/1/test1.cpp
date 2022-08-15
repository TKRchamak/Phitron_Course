//#include<iostream>
//
//using namespace std;
//
//class Shape
//{
//protected:
//    float w,h;
//
//public:
//    void get()
//    {
//        cin>>w>>h;
//    }
//
//    Shape(float a)
//    {
//        w=a;
//    }
//};
//
//class Rectangle: public Shape
//{
//public:
//    Rectangle(float a):Shape(a)
//    {
//        ;
//    }
//
//    void area()
//    {
//        get();
//        cout<<w*h<<endl;
//    }
//};
//
//int main()
//{
//    Rectangle R(2.45);
//    R.area();
//
//    return 0;
//}




#include<iostream>
using namespace std;

class Shape
{
protected:
    float w,h;
    void get()
    {
        cin>>w>>h;
    }

    Shape(float a)
    {
        w=a;
    }
};

class Rectangle: public Shape
{
protected:
    void area()// 1. error  void area ---> void area()
    {
        cout<<w*h<<endl;
    }
public:
    Rectangle(float a):Shape(a) // 3. create a constrator
    {
        get();
        area();
    }
};

int main()
{
    Rectangle R(2.45); //2.error rectangle --->Rectangle
//    R.get();  4. that not working in the main function because that is protected
//    R.area(); 5. that not working in the main function because that is also protected protected so u need to use constrator
    return 0;

}
