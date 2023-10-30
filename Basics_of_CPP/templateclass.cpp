#include<iostream>
using namespace std;

template <class T>
class Example
{
    public:
    T x,y;
    Example(T a,T b)
    {
        x=a;
        y=b;
    }
    void getmax()
    {
        if(x>y)
            cout<<x<<endl;
        else
            cout<<y<<endl;
        
    }
};

int main()
{
    Example<int> c1(10,25);
    Example<double> c2(10.53,15.10);
    Example<char> c3('a','b');
    c1.getmax();
    c2.getmax();
    c3.getmax();
    return 0;
}