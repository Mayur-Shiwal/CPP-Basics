#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,4> a={2,4,6,5};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    cout<<"Element at second index "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    return 0;
}
