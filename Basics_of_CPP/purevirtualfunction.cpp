#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void setdata()=0;
    virtual void area()=0;
};

class square:public shape
{
    int s;
    public:
    void setdata()
    {
        s=5;
    }
    void area()
    {
        cout<<"Area is: "<<s*s<<endl;
    }
};
class rectangle:public shape
{
    int l,b;
    public:
    void setdata()
    {
        l=10;
        b=5;
    }
    void area()
    {
        cout<<"Arae of the rectangle "<<l*b<<endl;
    }
};
class circle:public shape
{
    int r;
    public:
    void setdata()
    {
        r=5;
    }
    void area()
    {
        cout<<"Arae of the circle "<<3.14*r*r<<endl;
    }
};
int main()
{
    circle c;
    square s;
    rectangle r;
    c.setdata();
    s.setdata();
    r.setdata();
    c.area();
    s.area();
    r.area();
    return 0;

}