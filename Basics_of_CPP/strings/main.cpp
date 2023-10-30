#include <iostream>

using namespace std;

int main()
{
    string first_name = "bob";
    string last_name = "marlie";
    string name = first_name + ' ' + last_name;
    cout<<name.find("lie")<<endl;
    cout<<name.length()<<endl;
    cout<<name.substr(2,5)<<endl;
    return 0;
}
