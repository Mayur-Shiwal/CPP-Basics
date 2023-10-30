#include<iostream>
using namespace std;

template <class T>

T large(T x,T y)
{
    if(x>y)
        return x;
    else
        return y;
}

 int main()
 {
     cout<<large(5,10)<<endl;
     cout<<large('e','a')<<endl;
     cout<<large(10.53,5.6)<<endl;
     cout<<large(10.53f,5.6f)<<endl;
     return 0;
 }