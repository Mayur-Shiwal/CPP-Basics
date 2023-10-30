#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cout<<"Enter you age: "<<endl;
    cin>>a;
    if(a>50){
        cout<<"you will die soon "<<endl;
    }
    else if(a<20){
        cout<<"you have lot to live "<<endl;
    }
    else{
        cout<<"you are an adult"<<endl;
    }
    return 0;
}
