#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";      //you can print row numbers by giving o/p as i.
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
