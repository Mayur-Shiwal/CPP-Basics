#include <iostream>

using namespace std;

int globalnum; //global value integer

int main()
{
    int num;
    float floatnum=4.9;
    double doublenum=2.9;
    char alpha='4';
    bool boolean=true; //by default it is false
    string text="something";
    cout << "default value of num is: " <<num<< endl;
    cout << "default value of globalnum is: " <<globalnum<< endl;
    cout << "default value of floatnum is: " <<floatnum<< endl;
    cout << "default value of doublenum is: " <<doublenum<< endl;
    cout << "default value of alpha is: " <<alpha<< endl;
    cout << "default value of boolean is: " <<boolean<< endl;
    cout << "default value of string is: " <<text<< endl;
    return 0;
}
