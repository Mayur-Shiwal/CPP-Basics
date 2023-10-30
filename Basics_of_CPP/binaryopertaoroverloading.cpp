

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
    Example operator+(Example &E)
    {
        Example temp(0,0,0);
        temp.x=x+E.x;
        temp.y=y+E.y;
        temp.z=z+E.y;
        return temp;
        
    }
};

int main()
{
    Example E1, E2(10,20,30), E3(0,0,0);
    E1.showValue();
    E2.showValue();
    E3.showValue();
    E3=E1+E2;
    E3.showValue();
    return 0;
    
}

