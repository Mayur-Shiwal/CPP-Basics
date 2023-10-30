#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //creating vector
    vector<int>v;

    vector<int>a(5,1);
    //print a
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"Capacity of vector: "<<v.capacity()<<endl;   //checking capacity of vector

    //to add element
    v.push_back(1);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    cout<<"size of vector: "<<v.size()<<endl;           //checking size of vector
    cout<<"element at index 2 is "<<v.at(2)<<endl;
    cout<<"First element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;


    return 0;
}
