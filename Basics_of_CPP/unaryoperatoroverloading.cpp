

#include <iostream>

using namespace std;

class Example
{
    public:
    int x,y,z;
    Example()
    {
        x=3;
        y=4;
        z=5;
    }
    void showValue()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
};

int main()
{
    Example E1;
    E1.showValue();
    -E1;
    E1.showValue();
    return 0;
    
}
